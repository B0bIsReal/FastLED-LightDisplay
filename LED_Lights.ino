#include <FastLED.h>
#define NUM_LEDS 150
#define DATA_PIN 5






CRGB leds[NUM_LEDS];

void transition() {
  for(int dot = 6; dot < NUM_LEDS; dot++) { 
       leds[dot] = CRGB::Red;
       FastLED.show();
       delay(20);
    }
    for(int dot = 149; dot > 6; dot--) { 
       leds[dot] = CRGB::Green;
       FastLED.show();
       delay(20);
    }
    for(int dot = 6; dot < NUM_LEDS; dot++) { 
       leds[dot] = CRGB::Black;
       FastLED.show();
       delay(20);
    }
}
void setRangeRed(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::Red;
  }
}
void setRangeGreen(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::Green;
  }
}
void setRangeBrown(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::SaddleBrown;
  }
}
void setRangeWhite(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::White;
  }
}
void setRangeOrange(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::Orange;
  }
}
void setRangeGold(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::Chocolate;
  }
}
void clearRange(int startnum, int endnum) {
  for (int dot = startnum; dot < endnum + 1; dot++) {
    leds[dot] = CRGB::Black;
  }
}
void setLEDRed(int id) {
  leds[id] = CRGB::Red;
}
void clearLED(int id) {
  leds[id] = CRGB::Black;
}
void setLEDWhite(int id) {
  leds[id] = CRGB::White;
}
void setLEDGreen(int id) {
  leds[id] = CRGB::Green;
}
void setLEDOrange(int id) {
  leds[id] = CRGB::Orange;
}
void setLEDGold(int id) {
  leds[id] = CRGB::Chocolate;
}
void setLEDBlue(int id) {
  leds[id] = CRGB::Blue;
}
void setLEDKhaki(int id) {
  leds[id] = CRGB::Khaki;
}


void setup() { 
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  transition();

  // HO FLASH

  
    clearRange(6, 149);
    // TOP H
    setRangeRed(6, 7);
    setRangeRed(9, 10);
    setRangeRed(25, 26);
    setRangeRed(28, 34);
    setRangeRed(49, 55);
    setRangeRed(57, 58);
    setRangeRed(73, 74);
    setRangeRed(76, 77);
    // TOP O
    setRangeRed(67, 69);
    setRangeRed(61, 62); 
    setRangeRed(64, 65); 
    setLEDRed(46);
    setRangeRed(41, 42);
    setLEDRed(37);
    setRangeRed(18, 19);
    setRangeRed(21, 22);
    setRangeRed(14, 16);
    FastLED.show();
    delay(250);
    // TOP H
    setRangeGreen(6, 7);
    setRangeGreen(9, 10);
    setRangeGreen(25, 26);
    setRangeGreen(28, 34);
    setRangeGreen(49, 55);
    setRangeGreen(57, 58);
    setRangeGreen(73, 74);
    setRangeGreen(76, 77);
    // TOP O
    setRangeGreen(67, 69);
    setRangeGreen(61, 62); 
    setRangeGreen(64, 65); 
    setLEDGreen(46);
    setRangeGreen(41, 42);
    setLEDGreen(37);
    setRangeGreen(18, 19);
    setRangeGreen(21, 22);
    setRangeGreen(14, 16);
    FastLED.show();
    delay(250);
    clearRange(6, 149);
    // BOTTOM H
    setRangeRed(78, 79);
    setRangeRed(81, 82);
    setRangeRed(97, 98);  
    setRangeRed(100, 101);  
    setRangeRed(102, 106);
    setRangeRed(121, 125);
    setRangeRed(126, 127);
    setRangeRed(129, 130);
    setRangeRed(145, 146);
    setRangeRed(148, 149);
    // BOTTOM O
    setRangeRed(86, 88);
    setRangeRed(90, 91);
    setRangeRed(93, 94);
    setLEDRed(109);
    setRangeRed(113, 114);
    setLEDRed(118);
    setRangeRed(133, 134);
    setRangeRed(136, 137);
    setRangeRed(139, 141);
    FastLED.show();
    delay(250);
    // BOTTOM H
    setRangeGreen(78, 79);
    setRangeGreen(81, 82);
    setRangeGreen(97, 98);  
    setRangeGreen(100, 101);  
    setRangeGreen(102, 106);
    setRangeGreen(121, 125);
    setRangeGreen(126, 127);
    setRangeGreen(129, 130);
    setRangeGreen(145, 146);
    setRangeGreen(148, 149);
    // BOTTOM O
    setRangeGreen(86, 88);
    setRangeGreen(90, 91);
    setRangeGreen(93, 94);
    setLEDGreen(109);
    setRangeGreen(113, 114);
    setLEDGreen(118);
    setRangeGreen(133, 134);
    setRangeGreen(136, 137);
    setRangeGreen(139, 141);
    FastLED.show();
    delay(250);

    transition();






    // CHRISTMAS TREE
    setLEDWhite(11);
  setLEDGreen(24);
    FastLED.show();
    delay(250);
    setRangeGreen(34, 36);
    FastLED.show();
    delay(250);
    setRangeGreen(46, 50);
    FastLED.show();
    delay(250);
    setRangeGreen(56, 62);
    FastLED.show();
    delay(250);
    setRangeGreen(69, 75);
    FastLED.show();
    delay(250);
    setRangeGreen(79, 87);
    FastLED.show();
    delay(250);
    setRangeGreen(92, 100);
    FastLED.show();
    delay(250);
    setRangeGreen(102, 112);
    FastLED.show();
    delay(250);
    setRangeGreen(115, 125);
    FastLED.show();
    delay(250);
    setRangeBrown(130, 132);
    FastLED.show();
    delay(250);
    setRangeBrown(143, 145);
    FastLED.show();
    delay(2000);
    setLEDRed(110);
    FastLED.show();
    delay(1000);
    setLEDRed(57);
    FastLED.show();
    delay(1000);
    setLEDBlue(61);
    FastLED.show();
    delay(1000);
    setLEDWhite(104);
    FastLED.show();
    delay(1000);
    setLEDRed(97);
    FastLED.show();
    delay(1000);
    setLEDBlue(35);
    FastLED.show();
    delay(1000);
    setLEDWhite(94);
    FastLED.show();
    delay(1000);
    setLEDBlue(80);
    FastLED.show();
    delay(3000);
    for(int x = 0; x < 5; x++) {
      clearLED(10);
      clearLED(12);
      setLEDGreen(24);
      FastLED.show();
      delay(500);
      setLEDOrange(10);
      setLEDOrange(12);
      setLEDOrange(24);
      FastLED.show();
      delay(500);
      setLEDKhaki(9);
      setLEDKhaki(13);
      setLEDKhaki(23);
      setLEDKhaki(25);
      setLEDKhaki(35);
      FastLED.show();
      delay(500);
      setLEDOrange(10);
      setLEDOrange(12);
      setLEDOrange(24);
      setLEDBlue(35);
      clearLED(9);
      clearLED(13);
      clearLED(23);
      clearLED(25);
      FastLED.show();
      delay(500);
    }

    transition();






    // HO DRIP
    
    setRangeRed(6, 7);
  setRangeRed(9, 10);
  setRangeRed(25, 26);
  setRangeRed(28, 34);
  setRangeRed(49, 55);
  setRangeRed(57, 58);
  setRangeRed(73, 74);
  setRangeRed(76, 77);
  // O
  setRangeRed(86, 88);
  setRangeRed(90, 91);
  setRangeRed(93, 94);
  setLEDRed(109);
  setRangeRed(113, 114);
  setLEDRed(118);
  setRangeRed(133, 134);
  setRangeRed(136, 137);
  setRangeRed(139, 141);
  FastLED.show();
  delay(2000);
  setRangeGreen(78, 79);
  setRangeGreen(81, 82);
  setRangeGreen(67, 69);
  FastLED.show();
  delay(200);
  setRangeGreen(61, 62); 
  setRangeGreen(64, 65); 
  setRangeGreen(97, 98);  
  setRangeGreen(100, 101);  
  FastLED.show();
  delay(200);
  setLEDGreen(42);
  setLEDGreen(46);
  setRangeGreen(102, 106);
  FastLED.show();
  delay(200);
  setLEDGreen(41);
  setLEDGreen(37);
  setRangeGreen(121, 125);
  FastLED.show();
  delay(200);
  setRangeGreen(18, 19);
  setRangeGreen(21, 22);
  setRangeGreen(126, 127);
  setRangeGreen(129, 130);
  FastLED.show();
  delay(200);
  setRangeGreen(14, 16);
  setRangeGreen(145, 146);
  setRangeGreen(148, 149);
  FastLED.show();
  delay(7000);
    // Transition
    
    transition();
    







    // Present

    for(int dot = 44; dot < 52; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 56; dot < 64; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 68; dot < 76; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 80; dot < 88; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 92; dot < 100; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 104; dot < 112; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 116; dot < 124; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(250);
    for(int dot = 128; dot < 136; dot++) { 
       leds[dot] = CRGB::Red;
    }
    FastLED.show();
    delay(1000);
    leds[131] = CRGB::Yellow;
    leds[132] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[120] = CRGB::Yellow;
    leds[119] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[107] = CRGB::Yellow;
    leds[108] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[96] = CRGB::Yellow;
    leds[95] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[83] = CRGB::Yellow;
    leds[84] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[71] = CRGB::Yellow;
    leds[72] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[59] = CRGB::Yellow;
    leds[60] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[48] = CRGB::Yellow;
    leds[47] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[99] = CRGB::Yellow;
    leds[80] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[81] = CRGB::Yellow;
    leds[98] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[82] = CRGB::Yellow;
    leds[97] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[96] = CRGB::Yellow;
    leds[83] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[95] = CRGB::Yellow;
    leds[84] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[94] = CRGB::Yellow;
    leds[85] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[93] = CRGB::Yellow;
    leds[86] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    leds[92] = CRGB::Yellow;
    leds[87] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    for(int dot = 34; dot < 38; dot++) { 
       leds[dot] = CRGB::Yellow;
    }
    FastLED.show();
    delay(50);
    //                              LEFT    
    leds[25] = CRGB::Yellow;
    leds[10] = CRGB::Yellow;
    leds[9] = CRGB::Yellow;
    leds[33] = CRGB::Yellow;
    leds[27] = CRGB::Yellow;
    FastLED.show();
    delay(50);
    //                              RIGHT
    leds[22] = CRGB::Yellow;
    leds[20] = CRGB::Yellow;
    leds[14] = CRGB::Yellow;
    leds[13] = CRGB::Yellow;
    leds[38] = CRGB::Yellow;
    FastLED.show();
    delay(5000);

    // TRANSITION

    transition();
    










    // SANTA HAT
    
    setRangeRed(14, 15);
    FastLED.show();
    delay(250);
    setRangeRed(19, 23);
    FastLED.show();
    delay(250);
    setRangeRed(34, 37);
    setLEDWhite(40);
    setLEDRed(39);
    FastLED.show();
    delay(250);
    setRangeRed(46, 50);
    setRangeWhite(42, 44);
    FastLED.show();
    delay(250);
    setRangeRed(56, 61);
    setLEDWhite(64);
    FastLED.show();
    delay(250);
    setRangeRed(69, 75);
    FastLED.show();
    delay(250);
    setRangeRed(79, 86);
    FastLED.show();
    delay(250);
    setRangeRed(91, 100);
    FastLED.show();
    delay(250);
    setRangeWhite(102, 113);
    FastLED.show();
    delay(250);
    setRangeWhite(114, 125);
    FastLED.show();
    delay(2500);
    for(int x = 0; x < 16; x++){
      setRangeWhite(63, 65);
      setLEDWhite(67);
      setLEDRed(40);
      setLEDRed(42);
      setLEDRed(38);
      setLEDRed(44);
      clearRange(14, 15);
      clearLED(19);
      FastLED.show();
      delay(500);
      setRangeRed(14, 15);
      setLEDRed(19);
      setLEDWhite(40);
      setLEDRed(39);
      setRangeWhite(42, 44);
      clearRange(63, 67);
      setLEDWhite(64);
      clearLED(38);
      FastLED.show();
      delay(500);
    }

    transition();







    // BELL

    setLEDOrange(11);
  setRangeOrange(23, 25);
  setRangeOrange(34, 36);
  setRangeOrange(47, 49);
  setRangeOrange(57, 61);
  setRangeOrange(70, 74);
  setRangeRed(81, 85);
  setRangeOrange(93, 99);
  setRangeOrange(104, 110);
  FastLED.show();
  for(int x = 0; x < 11; x++) {
    clearRange(111, 149);
    setLEDGold(120);
    setRangeGold(130, 132);
    setLEDGold(144);
    FastLED.show();
    delay(250);
    clearRange(111, 149);
    setRangeGold(121, 122);
    setLEDGold(130);
    FastLED.show();
    delay(250);
    clearRange(111, 149);
    setLEDGold(120);
    setRangeGold(130, 132);
    setLEDGold(144);
    FastLED.show();
    delay(250);
    clearRange(111, 149);
    setRangeGold(118, 119);
    setLEDGold(132);
    FastLED.show();
    delay(250);
  }
  clearRange(111, 149);
    setLEDGold(120);
    setRangeGold(130, 132);
    setLEDGold(144);
    FastLED.show();
}
