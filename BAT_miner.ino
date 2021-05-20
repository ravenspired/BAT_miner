#include "DigiKeyboard.h"
int time = -1;
int end_time = 3900000;
void setup() {
  // don't need to set anything up

}


void loop() {

  time++;
  if (time = end_time) {
    time = -1;
  }
  //what users do in front of a computer, amirite?

  DigiKeyboard.delay(1000);
  DigiKeyboard.println("wikipedia.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("sdfglhjdfkg.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("who is president");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("example.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("discord.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("duckduckgo.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("ebay.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("wish.com");
  DigiKeyboard.delay(1000);

  //Now to navigate to the different tabs and scroll through them
  DigiKeyboard.sendKeyStroke(KEY_1, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_2, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_3, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_4, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_5, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_6, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_7, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_8, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_9, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.delay(1000);


  //Now close the tabs
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_1, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(5000);

}
