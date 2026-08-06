const int BTN_PINS[3] = {5, 6, 7};
bool BTN_STATES[3] = {HIGH, HIGH, HIGH};
bool lastreading[3] = {HIGH, HIGH, HIGH};
unsigned long LastDebounceTime[3] = {0, 0, 0};
const unsigned long DebounceDelay = 15;
#include <Adafruit_TinyUSB.h>
uint8_t const desc_hid_report[] = {
  TUD_HID_REPORT_DESC_CONSUMER( HID_REPORT_ID(1) )
};
Adafruit_USBD_HID usb_hid(desc_hid_report, sizeof(desc_hid_report), HID_ITF_PROTOCOL_NONE, 2, false); //what even is this, why cant yall make this more shorter


void setup(){
  usb_hid.begin();
for(int i = 0; i < 3; i++){ //beginning of my nightmare
   pinMode(BTN_PINS[i], INPUT_PULLUP);
}
while (!TinyUSBDevice.mounted()) {
    delay(10);
  }
}
void loop(){
  for(int i = 0; i < 3; i++){ //debounce logic start here
    bool currentReading = digitalRead(BTN_PINS[i]);
    if(currentReading != lastreading[i]){
      LastDebounceTime[i] = millis();
    }
    if((millis() - LastDebounceTime[i]) > DebounceDelay){ //ugh took like an hour to fix and work
      if(currentReading != BTN_STATES[i]){
        BTN_STATES[i] = currentReading;
        if (usb_hid.ready()){
          if (i == 2 && BTN_STATES[i] == LOW) { //this part here is so confusing lowkey
        usb_hid.sendReport16(1, HID_USAGE_CONSUMER_MUTE);
        delay(10);
        usb_hid.sendReport16(1, 0);
        }
        else if (i != 2 && BTN_STATES[i] == HIGH) {
        usb_hid.sendReport16(1, 0);
      }
    }
   }
 }
    lastreading[i] = currentReading;
        if (i != 2 && usb_hid.ready()){ //at least its simple here but i cant stand the complexity of this code
        if(BTN_STATES[i] == LOW){
            if(i == 0)
              usb_hid.sendReport16(1, HID_USAGE_CONSUMER_VOLUME_INCREMENT);
            else if(i == 1)
              usb_hid.sendReport16(1, HID_USAGE_CONSUMER_VOLUME_DECREMENT);
            delay(100);
   }  //maybe i should really make comments on brackets so i can figure out which one is which  
  }
 }
}
  