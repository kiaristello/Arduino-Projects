#include "LedControl.h"
LedControl lc=LedControl(12,10,11,1);


void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
void writeCharacter(){
  /* here is the data for the characters */
  byte A[8]={B00111100,B01000010,B01000010,B01000010,B01111110,B01000010,B01000010,B01000010};
  byte B[8]={B00111000,B01000100,B01000010,B01000100,B01111000,B01000100,B01000010,B01111100};
  byte C[8]={B00111100,B01000000,B01000000,B01000000,B01000000,B01000000,B01000000,B00111100};
  byte D[8]={B01111100,B00100010,B00100010,B00100010,B00100010,B00100010,B00100010,B01111100};
  byte one1[8]={B00001000,B00011000,B00101000,B00001000,B00001000,B00001000,B00001000,B01111110};
  byte two2[8]={B00111100,B01000010,B01000010,B00000010,B00000100,B00001000,B00010000,B01111110};
  byte three3[8]={B00111100,B00100010,B00000010,B00000100,B00000010,B00100010,B00100010,B00011100};
  byte four4[8]={B01000010,B01000010,B01000010,B01000010,B01111110,B00000010,B00000010,B0000010};
  byte five5[8]={B00111100,B01000000,B01000000,B01111000,B00000100,B00000100,B01000100,B00111000};
  byte six6[8]={B00111100,B01000000,B01000000,B01000000,B01111000,B01000100,B01000100,B00111000};
  byte seven7[8]={B00111110,B00100010,B00000010,B00000100,B00001000,B00001000,B00001000,B00001000};
  byte eight8[8]={B00111100,B01000010,B01000010,B01000010,B00111100,B01000010,B01000010,B00111100};
  byte nine9[8]={B00111100,B01000010,B01000010,B01000010,B00111100,B00000010,B00000010,B00111100};
  byte zero0[8]={B00111100,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B00111100};
  byte asterisk[6]={B01000010,B00100100,B01000010,B00111100,B00000010,B00000010};
  byte hashtag[8]={B00111100,B01000010,B01000010,B01000010,B01000010,B01000010,B01000010,B00111100};
    //case 'A':
      lc.setRow(0,0,A[0]);
      lc.setRow(0,1,A[1]);
      lc.setRow(0,2,A[2]);
      lc.setRow(0,3,A[3]);
      lc.setRow(0,4,A[4]);
      lc.setRow(0,5,A[5]);
      lc.setRow(0,6,A[6]);
      lc.setRow(0,7,A[7]);
      delay(500);
    //break;
      //case 'B':
      lc.setRow(0,0,B[0]);
      lc.setRow(0,1,B[1]);
      lc.setRow(0,2,B[2]);
      lc.setRow(0,3,B[3]);
      lc.setRow(0,4,B[4]);
      lc.setRow(0,5,B[5]);
      lc.setRow(0,6,B[6]);
      lc.setRow(0,7,B[7]);
      delay(500);
    //break;
      //case 'C':
      lc.setRow(0,0,C[0]);
      lc.setRow(0,1,C[1]);
      lc.setRow(0,2,C[2]);
      lc.setRow(0,3,C[3]);
      lc.setRow(0,4,C[4]);
      lc.setRow(0,5,C[5]);
      lc.setRow(0,6,C[6]);
      lc.setRow(0,7,C[7]);
      delay(500);
    //break;
      //case 'D':
      lc.setRow(0,0,D[0]);
      lc.setRow(0,1,D[1]);
      lc.setRow(0,2,D[2]);
      lc.setRow(0,3,D[3]);
      lc.setRow(0,4,D[4]);
      lc.setRow(0,5,D[5]);
      lc.setRow(0,6,D[6]);
      lc.setRow(0,7,D[7]);
      delay(500);
    //break;
    //case 'one1':
      lc.setRow(0,0,one1[0]);
      lc.setRow(0,1,one1[1]);
      lc.setRow(0,2,one1[2]);
      lc.setRow(0,3,one1[3]);
      lc.setRow(0,4,one1[4]);
      lc.setRow(0,5,one1[5]);
      lc.setRow(0,6,one1[6]);
      lc.setRow(0,7,one1[7]);
      delay(500);
    //break;
      //case 'two2':
      lc.setRow(0,0,two2[0]);
      lc.setRow(0,1,two2[1]);
      lc.setRow(0,2,two2[2]);
      lc.setRow(0,3,two2[3]);
      lc.setRow(0,4,two2[4]);
      lc.setRow(0,5,two2[5]);
      lc.setRow(0,6,two2[6]);
      lc.setRow(0,7,two2[7]);
      delay(500);
    //break;
      //case 'three3':
      lc.setRow(0,0,three3[0]);
      lc.setRow(0,1,three3[1]);
      lc.setRow(0,2,three3[2]);
      lc.setRow(0,3,three3[3]);
      lc.setRow(0,4,three3[4]);
      lc.setRow(0,5,three3[5]);
      lc.setRow(0,6,three3[6]);
      lc.setRow(0,7,three3[7]);
      delay(500);
    //break;
      //case 'four4':
      lc.setRow(0,0,four4[0]);
      lc.setRow(0,1,four4[1]);
      lc.setRow(0,2,four4[2]);
      lc.setRow(0,3,four4[3]);
      lc.setRow(0,4,four4[4]);
      lc.setRow(0,5,four4[5]);
      lc.setRow(0,6,four4[6]);
      lc.setRow(0,7,four4[7]);
      delay(500);
    //break;
      //case 'five5':
      lc.setRow(0,0,five5[0]);
      lc.setRow(0,1,five5[1]);
      lc.setRow(0,2,five5[2]);
      lc.setRow(0,3,five5[3]);
      lc.setRow(0,4,five5[4]);
      lc.setRow(0,5,five5[5]);
      lc.setRow(0,6,five5[6]);
      lc.setRow(0,7,five5[7]);
      delay(500);
    //break;
      //case 'six6':
      lc.setRow(0,0,six6[0]);
      lc.setRow(0,1,six6[1]);
      lc.setRow(0,2,six6[2]);
      lc.setRow(0,3,six6[3]);
      lc.setRow(0,4,six6[4]);
      lc.setRow(0,5,six6[5]);
      lc.setRow(0,6,six6[6]);
      lc.setRow(0,7,six6[7]);
      delay(500);
    //break;
    //case 'seven7':
      lc.setRow(0,0,seven7[0]);
      lc.setRow(0,1,seven7[1]);
      lc.setRow(0,2,seven7[2]);
      lc.setRow(0,3,seven7[3]);
      lc.setRow(0,4,seven7[4]);
      lc.setRow(0,5,seven7[5]);
      lc.setRow(0,6,seven7[6]);
      lc.setRow(0,7,seven7[7]);
      delay(500);
    //break;
      //case 'eight8':
      lc.setRow(0,0,eight8[0]);
      lc.setRow(0,1,eight8[1]);
      lc.setRow(0,2,eight8[2]);
      lc.setRow(0,3,eight8[3]);
      lc.setRow(0,4,eight8[4]);
      lc.setRow(0,5,eight8[5]);
      lc.setRow(0,6,eight8[6]);
      lc.setRow(0,7,eight8[7]);
      delay(500);
    //break;
      //case 'nine9':
      lc.setRow(0,0,nine9[0]);
      lc.setRow(0,1,nine9[1]);
      lc.setRow(0,2,nine9[2]);
      lc.setRow(0,3,nine9[3]);
      lc.setRow(0,4,nine9[4]);
      lc.setRow(0,5,nine9[5]);
      lc.setRow(0,6,nine9[6]);
      lc.setRow(0,7,nine9[7]);
      delay(500);
    //break;
      //case 'zero0':
      lc.setRow(0,0,zero0[0]);
      lc.setRow(0,1,zero0[1]);
      lc.setRow(0,2,zero0[2]);
      lc.setRow(0,3,zero0[3]);
      lc.setRow(0,4,zero0[4]);
      lc.setRow(0,5,zero0[5]);
      lc.setRow(0,6,zero0[6]);
      lc.setRow(0,7,zero0[7]);
      delay(500);
    //break;
      //case 'asterisk':
      lc.setRow(0,1,asterisk[1]);
      lc.setRow(0,2,asterisk[2]);
      lc.setRow(0,3,asterisk[3]);
      lc.setRow(0,4,asterisk[4]);
      lc.setRow(0,5,asterisk[5]);
      lc.setRow(0,6,asterisk[6]);
      delay(50000000);
    //break;
      //case 'hashtag':
      lc.setRow(0,0,zero0[0]);
      lc.setRow(0,1,zero0[1]);
      lc.setRow(0,2,zero0[2]);
      lc.setRow(0,3,zero0[3]);
      lc.setRow(0,4,zero0[4]);
      lc.setRow(0,5,zero0[5]);
      lc.setRow(0,6,zero0[6]);
      lc.setRow(0,7,zero0[7]);
      delay(500000000);
    //break;
}    
void loop() {
  writeCharacter();
}
