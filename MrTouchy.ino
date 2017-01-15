#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthNoisePink      kickNoise;      //xy=1200,2092.5
AudioSynthSimpleDrum     kickDrum;       //xy=1214,1987.5
AudioSynthWaveformSineModulated kickFM;         //xy=1224,2201.5
AudioSynthNoiseWhite     snare;          //xy=1327,2374.5
AudioSynthWaveformDc     snareEnv;       //xy=1332,2415.5
AudioSynthNoiseWhite     noise;          //xy=1363,1677.5
AudioSynthWaveformDc     hhEnv;          //xy=1377,2565.5
AudioMixer4              kickPreMix;     //xy=1379,2150.5
AudioSynthNoiseWhite     hh;             //xy=1379,2529.5
AudioSynthWaveform       padOneWavTwo;   //xy=1448,1464.5
AudioSynthWaveform       padOneWavOne;   //xy=1452,1427.5
AudioSynthWaveform       padTwoWavTwo;   //xy=1462,1886.5
AudioSynthWaveform       padTwoWavOne;   //xy=1463,1851.5
AudioEffectMultiply      kickEnv;        //xy=1479,2090.5
AudioSynthSimpleDrum     snareDrum;      //xy=1484,2433.5
AudioEffectMultiply      snareDriver;    //xy=1485,2389.5
AudioEffectMultiply      hhDriver;       //xy=1511,2547.5
AudioMixer4              kickMixer;      //xy=1581,2228.5
AudioSynthKarplusStrong  string1;        //xy=1590,1599.5
AudioSynthKarplusStrong  string2;        //xy=1591,1640.5
AudioMixer4              oscOneMixer;    //xy=1633,1464.5
AudioMixer4              oscTwoMixer;    //xy=1634,1867.5
AudioSynthKarplusStrong  string3;        //xy=1639,2021.5
AudioSynthKarplusStrong  string4;        //xy=1643,2060.5
AudioFilterStateVariable hhFilter;       //xy=1642,2565.5
AudioSynthWaveformDc     envOne;         //xy=1663,1529.5
AudioSynthWaveformDc     envTwo;         //xy=1677,1932.5
AudioMixer4              stringMixer;    //xy=1753,1633.5
AudioMixer4              drumMixer;      //xy=1778,2261.5
AudioEffectMultiply      multiply1;      //xy=1798,1483.5
AudioEffectMultiply      multiply2;      //xy=1797,1887.5
AudioMixer4              stringMixerTwo; //xy=1800,2059.5
AudioSynthWaveform       lfo;            //xy=1941,1813.5
AudioSynthWaveform       drumLFO;        //xy=1981,2325.5
AudioSynthWaveformDc     lfoDC;          //xy=1994,1734.5
AudioMixer4              oscStringMixerTwo; //xy=2011,1958.5
AudioMixer4              oscStringMixer; //xy=2028,1592.5
AudioFilterStateVariable mainDrumFilter; //xy=2165,2200.5
AudioMixer4              lfoMixer;       //xy=2241,1792.5
AudioFilterStateVariable padOneFilter;   //xy=2290,1569.5
AudioAnalyzePeak         lfoPeak;        //xy=2299,1704.5
AudioFilterStateVariable padTwoFilter;   //xy=2302,1926.5
AudioAnalyzePeak         peak2;          //xy=2438,2026.5
AudioAnalyzePeak         peak1;          //xy=2471,1495.5
AudioFilterStateVariable delayFilter;    //xy=2503,1838.5
AudioMixer4              delayMixStage;  //xy=2552,1750.5
AudioEffectDelay         delay1;         //xy=2622,2046.5
AudioMixer4              finalStage;     //xy=2774,1820.5
AudioOutputI2S           i2s2;           //xy=2929,1818.5
AudioConnection          patchCord1(kickNoise, 0, kickPreMix, 0);
AudioConnection          patchCord2(kickDrum, 0, kickEnv, 0);
AudioConnection          patchCord3(kickDrum, 0, kickMixer, 0);
AudioConnection          patchCord4(kickFM, 0, kickPreMix, 1);
AudioConnection          patchCord5(snare, 0, snareDriver, 0);
AudioConnection          patchCord6(snareEnv, 0, snareDriver, 1);
AudioConnection          patchCord7(noise, 0, oscOneMixer, 2);
AudioConnection          patchCord8(noise, 0, oscTwoMixer, 2);
AudioConnection          patchCord9(hhEnv, 0, hhDriver, 1);
AudioConnection          patchCord10(kickPreMix, 0, kickEnv, 1);
AudioConnection          patchCord11(hh, 0, hhDriver, 0);
AudioConnection          patchCord12(padOneWavTwo, 0, oscOneMixer, 1);
AudioConnection          patchCord13(padOneWavOne, 0, oscOneMixer, 0);
AudioConnection          patchCord14(padTwoWavTwo, 0, oscTwoMixer, 1);
AudioConnection          patchCord15(padTwoWavOne, 0, oscTwoMixer, 0);
AudioConnection          patchCord16(kickEnv, 0, kickMixer, 1);
AudioConnection          patchCord17(kickEnv, kickFM);
AudioConnection          patchCord18(snareDrum, 0, drumMixer, 2);
AudioConnection          patchCord19(snareDriver, 0, drumMixer, 1);
AudioConnection          patchCord20(hhDriver, 0, hhFilter, 0);
AudioConnection          patchCord21(kickMixer, 0, drumMixer, 0);
AudioConnection          patchCord22(string1, 0, stringMixer, 0);
AudioConnection          patchCord23(string2, 0, stringMixer, 1);
AudioConnection          patchCord24(oscOneMixer, 0, multiply1, 0);
AudioConnection          patchCord25(oscTwoMixer, 0, multiply2, 0);
AudioConnection          patchCord26(string3, 0, stringMixerTwo, 0);
AudioConnection          patchCord27(string4, 0, stringMixerTwo, 1);
AudioConnection          patchCord28(hhFilter, 1, drumMixer, 3);
AudioConnection          patchCord29(envOne, 0, multiply1, 1);
AudioConnection          patchCord30(envTwo, 0, multiply2, 1);
AudioConnection          patchCord31(stringMixer, 0, oscStringMixer, 1);
AudioConnection          patchCord32(drumMixer, 0, mainDrumFilter, 0);
AudioConnection          patchCord33(multiply1, 0, oscStringMixer, 0);
AudioConnection          patchCord34(multiply2, 0, oscStringMixerTwo, 0);
AudioConnection          patchCord35(stringMixerTwo, 0, oscStringMixerTwo, 1);
AudioConnection          patchCord36(lfo, 0, padOneFilter, 1);
AudioConnection          patchCord37(lfo, 0, padTwoFilter, 1);
AudioConnection          patchCord38(lfo, 0, lfoMixer, 0);
AudioConnection          patchCord39(drumLFO, 0, mainDrumFilter, 1);
AudioConnection          patchCord40(lfoDC, 0, lfoMixer, 1);
AudioConnection          patchCord41(oscStringMixerTwo, 0, padTwoFilter, 0);
AudioConnection          patchCord42(oscStringMixer, 0, padOneFilter, 0);
AudioConnection          patchCord43(mainDrumFilter, 0, delayMixStage, 2);
AudioConnection          patchCord44(lfoMixer, lfoPeak);
AudioConnection          patchCord45(padOneFilter, 0, delayMixStage, 0);
AudioConnection          patchCord46(padOneFilter, 0, peak1, 0);
AudioConnection          patchCord47(padTwoFilter, 0, delayMixStage, 1);
AudioConnection          patchCord48(padTwoFilter, 0, peak2, 0);
AudioConnection          patchCord49(delayFilter, 0, delayMixStage, 3);
AudioConnection          patchCord50(delayMixStage, delay1);
AudioConnection          patchCord51(delayMixStage, 0, finalStage, 0);
AudioConnection          patchCord52(delay1, 0, delayFilter, 0);
AudioConnection          patchCord53(finalStage, 0, i2s2, 0);
AudioConnection          patchCord54(finalStage, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2712,1640.5
// GUItool: end automatically generated code







#include <Metro.h>

Metro serialMetro = Metro(500);

#include <Bounce.h>
#include <Adafruit_NeoPixel.h>
#define PIN            4
#define NUMPIXELS      24
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


//Mux control pins
int s0 = 24;
int s1 = 25;
int s2 = 26;
int s3 = 27;
//Mux in "SIG" pin
int SIG_pin = 28;

float analogValues[13];
float analogValuesLag[13];
int digitalValues[16];
int prevDigitalValues[16];
int btnState;
int PrevBtnState;
Bounce wavTrig = Bounce(28,5);
bool wavDisplayFlag = false;
bool octDisplayFlag = false;

//Synth
int OneyOne = A7;
int OnexTwo = A6;
int OneyTwo = 0;
int OnexOne = 1;

int TwoyOne = A19;
int TwoxTwo = A18;
int TwoyTwo = 2;
int TwoxOne = 3;

//SynthVars
int glideTime;
float detune;
float attackTime;
float decayTime;

int octIndex;
float octArray[5] = {.25,.5,1,2,4};
float octave;

float padOnePeak;
float padTwoPeak;

int wavIndex = 0;
short waveShapes[4] = {
  WAVEFORM_TRIANGLE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SQUARE,
  WAVEFORM_SQUARE,
};

bool padOneNoteOn;
bool padTwoNoteOn;

//bool fourNoteRes;
bool yPosAlt;
float yPosBendOne = 1;
float yPosBendTwo = 1;

bool firstRun;

//freq
int quantizedValue;
int prevQuantizedValue;
float padOneCurrentXVal;
float padOnePrevXVal;
float padTwoCurrentVal;
float padTwoPrevVal;
float aMinor[8]{
    220.00,246.94,261.63,293.66,
    329.63,349.23,394.00,440.00
};

//COLOR TABLES
int colorTablePadOne[8][3]{
    {255, 0, 199},
    {0, 229, 255},
    {29, 255, 0},
    {255, 72, 0},

    {210, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {189, 84, 255},
};
int colorTablePadTwo[8][3]{
    {255, 0, 199},
    {0, 229, 255},
    {29, 255, 0},
    {255, 72, 0},

    {210, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {189, 84, 255},
};
int colorIndexOne;
int colorIndexTwo;

float yposColorAltOne; 
float yposColorAltTwo;
float lfoPeakVal;

unsigned long changeStamp;



//DRUMS!!!
bool drumMode;
int seqStep;
int prevSeqStep;
// float seqMSSend;
// int seqMSDSend;


bool kickSteps[16]{false};
bool snareSteps[16]{false};
bool hhSteps[16]{false};

int snareRelease;
int hhRelease;
bool seqPlay;
float seqInterval;
int seqPage;
int lfoIndex;
int drumLfoIndex;
int lfoTimeMathArray[5] = {250, 500, 1000, 2000, 4000};

//DrumAutomation
int kickPitch[16];
int kickPitchFM[16];
int kickLength[16];
int snarePitch[16];
int snareLength[16];
int snareLengthNoise[16];
int hhTone[16];
int hhLength[16];
int drumFilter[16];
int drumRes[16];



void setup() {

  AudioMemory(160);
  Serial.begin(115200);
  sgtl5000_1.enable();
  sgtl5000_1.lineOutLevel(13);

  padOneWavOne.begin(.5,220,WAVEFORM_TRIANGLE);
  padOneWavTwo.begin(.5,220,WAVEFORM_TRIANGLE);
  padTwoWavOne.begin(.5,220,WAVEFORM_TRIANGLE);
  padTwoWavTwo.begin(.5,220,WAVEFORM_TRIANGLE);

  lfo.begin(0, 0, WAVEFORM_SAWTOOTH_REVERSE);
  lfoDC.amplitude(1);

  delayFilter.frequency(2000);
  delayFilter.resonance(.7);
  delay1.delay(0,0);
  delayMixStage.gain(3,0);

  oscStringMixer.gain(0, .3);
  oscStringMixerTwo.gain(0, .3);
  octave = 1;
  padOneFilter.octaveControl(2.5);
  padTwoFilter.octaveControl(2.5);
  lfoIndex = 2;
  drumLfoIndex = 2;
  firstRun = true;

  drumMixer.gain(0, .5);
  drumMixer.gain(1, .3);
  drumMixer.gain(2, .2);
  drumMixer.gain(3, .2);
  kickFM.frequency(60);
  kickFM.amplitude(1);
  kickNoise.amplitude(.2);
  kickDrum.pitchMod(0.7);
  kickDrum.frequency(60);
  kickDrum.length(500);
  snare.amplitude(1);
  snareDrum.pitchMod(0.7);
  snareDrum.frequency(100);
  snareDrum.length(100);
  snareRelease = 500;
  hh.amplitude(1);
  hhRelease = 20;
  hhFilter.frequency(9000);
  hhFilter.resonance(.7);
  mainDrumFilter.frequency(9000);
  mainDrumFilter.resonance(.7);
  mainDrumFilter.octaveControl(2.5);
  drumLFO.begin(0,0,WAVEFORM_SQUARE);
  seqPage = 0;

  seqStep = 0;
  prevSeqStep = 15;


  //MUX
  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(SIG_pin, INPUT);

  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);

  wavIndex = 0;

  pixels.begin();
  pixels.setBrightness(85);
}

int readXOne(){
  pinMode(OneyOne, INPUT);
  pinMode(OnexTwo, OUTPUT);
  pinMode(OneyTwo, INPUT);
  pinMode(OnexOne, OUTPUT);

  digitalWrite(OnexTwo, LOW);
  digitalWrite(OnexOne, HIGH);

  delay(5); //pause to allow lines to power up

  return analogRead(OneyOne);
}

int readYOne(){

  pinMode(OneyOne, OUTPUT);
  pinMode(OnexTwo, INPUT);
  pinMode(OneyTwo, OUTPUT);
  pinMode(OnexOne, INPUT);

  digitalWrite(OneyOne, LOW);
  digitalWrite(OneyTwo, HIGH);

  delay(1); //pause to allow lines to power up

  return analogRead(OnexTwo);
}

int readXTwo(){
  pinMode(TwoyOne, INPUT);
  pinMode(TwoxTwo, OUTPUT);
  pinMode(TwoyTwo, INPUT);
  pinMode(TwoxOne, OUTPUT);

  digitalWrite(TwoxTwo, LOW);
  digitalWrite(TwoxOne, HIGH);

  delay(5); //pause to allow lines to power up

  return analogRead(TwoyOne);
}

int readYTwo(){
  pinMode(TwoyOne, OUTPUT);
  pinMode(TwoxTwo, INPUT);
  pinMode(TwoyTwo, OUTPUT);
  pinMode(TwoxOne, INPUT);

  digitalWrite(TwoyOne, LOW);
  digitalWrite(TwoyTwo, HIGH);

  delay(1); //pause to allow lines to power up

  return analogRead(TwoxTwo);
}
int readMux(int channel){
  int controlPin[] = {s0, s1, s2, s3};

  int muxChannel[16][4]={
    {0,0,0,0}, //channel 0
    {1,0,0,0}, //channel 1
    {0,1,0,0}, //channel 2
    {1,1,0,0}, //channel 3
    {0,0,1,0}, //channel 4
    {1,0,1,0}, //channel 5
    {0,1,1,0}, //channel 6
    {1,1,1,0}, //channel 7
    {0,0,0,1}, //channel 8
    {1,0,0,1}, //channel 9
    {0,1,0,1}, //channel 10
    {1,1,0,1}, //channel 11
    {0,0,1,1}, //channel 12
    {1,0,1,1}, //channel 13
    {0,1,1,1}, //channel 14
    {1,1,1,1}  //channel 15
  };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }

  int val;
  if(channel < 13){
    val = getSmooth(SIG_pin);
  }else{
    val = digitalRead(SIG_pin);
  }

  //return the value
  return val;
}
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
int getSmooth(int pin){
  int vals[10];
  for(int i = 0; i < 10; i++){
    vals[i] = analogRead(pin);
  }
  float smooth = (vals[0] + vals[1] + vals[2] + vals[3] + vals[4] + vals[5] + vals[6] + vals[7] + vals[8] + vals[9]) / 10;
  return smooth;
}
void setFreq(float val, float preVal, bool synthOne){

    if(synthOne){
        colorIndexOne = map(val, 60, 750, 0, 3);
        quantizedValue = map(val, 60, 750, 0, 3);
        val = aMinor[quantizedValue];
        prevQuantizedValue = map(preVal, 60, 750, 0, 3);
        preVal = aMinor[prevQuantizedValue];
    }else{
        colorIndexTwo = map(val, 60, 750, 4, 7);
        quantizedValue = map(val, 60, 750, 4, 7);
        val = aMinor[quantizedValue];
        prevQuantizedValue = map(preVal, 60, 750, 4, 7);
        preVal = aMinor[prevQuantizedValue];
    }



    //STRING
    if(wavIndex == 3){
        if(synthOne){
            if (abs(val - preVal) > 0 || !padOneNoteOn){
                lightsOut();
                string1.noteOn(val*detune*octave*yPosBendOne, .3);
                string2.noteOn(val*octave*yPosBendOne, .3);
                
            }
        }else{
            if (abs(val - preVal) > 0 || !padTwoNoteOn){
                string3.noteOn(val*detune*octave*yPosBendTwo, .3);
                string4.noteOn(val*octave*yPosBendTwo, .3);
            }
        }
    }else{
        //SET FREQ WIHT GLIDE
        if(synthOne){
            padOneWavOne.frequency((val*detune)*octave*yPosBendOne);
            padOneWavTwo.frequency(val*octave*yPosBendOne);    
        }
        if(!synthOne){
            padTwoWavOne.frequency((val*detune)*octave*yPosBendTwo);
            padTwoWavTwo.frequency(val*octave*yPosBendTwo);    
        }
    }
}

void lightsOut(){
    for(int i=0; i<24; i++){
        pixels.setPixelColor(i, pixels.Color(0,0,0));
    }
    pixels.show();
}
void drumLights(int g, int r, int b){
    for(int i=0; i<24; i++){
        pixels.setPixelColor(i, pixels.Color(g,r,b));
    }
    pixels.show();
}

void loop() {

    //PAD ONE
    int x = readXOne();
    float y = readYOne();

    if((x < 1000) && (y < 1000)){
        padOneCurrentXVal = x;
        if(drumMode){
            if(!seqPlay){
                setStep(padOneCurrentXVal, padOnePrevXVal, y, true);
            }
        }else{
            setFreq(padOneCurrentXVal, padOnePrevXVal, true);
        }
        padOneNoteOn = true;
        padOnePrevXVal = padOneCurrentXVal;
    }else{
        padOneNoteOn = false;
    }

    if(padOneNoteOn){
        envOne.amplitude(.3,attackTime);
        if(yPosAlt){
            yPosBendOne = mapfloat(y, 125, 900, 1.05, .95);
        }else{
            padOneFilter.frequency(map(y, 125, 900, 4450, 1));
        }
        yposColorAltOne = mapfloat(y, 125, 900, 1, .1);
    }else{
        envOne.amplitude(0, decayTime);
    }
    //PAD TWO
    int a = readXTwo();
    float b = readYTwo();

    if((a < 1000) && (b < 1000)){
        padTwoCurrentVal = a;
        if(drumMode){
            if(!seqPlay){
                setStep(padTwoCurrentVal, padTwoPrevVal, b, false);
            }
        }else{
            setFreq(padTwoCurrentVal, padTwoPrevVal, false);
        }
        padTwoNoteOn = true;
        padTwoPrevVal = padTwoCurrentVal;
    }else{
        padTwoNoteOn = false;
    }
    
    if(padTwoNoteOn){
        envTwo.amplitude(.3,attackTime);
        if(yPosAlt){
            yPosBendTwo = mapfloat(b, 125, 900, 1.05, .95);
        }else{
            padTwoFilter.frequency(map(b, 125, 900, 4450, 1));
        }
        yposColorAltTwo = mapfloat(b, 125, 900, 1, .1);
    }else{
        envTwo.amplitude(0, decayTime);
    }

    //PEAK DETECTION FOR LEDS
    if(peak1.available()){
        padOnePeak = (peak1.read()*2);
        padOnePeak = constrain(padOnePeak, 0, 1);
    }
    if(peak2.available()){
        padTwoPeak = (peak2.read()*2);
        padTwoPeak = constrain(padTwoPeak, 0, 1);
    }
    if(lfoPeak.available()){
        lfoPeakVal = lfoPeak.read();
    }

    //LEDS
    if(!wavDisplayFlag && !octDisplayFlag && !drumMode){
        for(int i=0; i<24; i++){
            if(i<4 || i==8 || i==9 || i==10 || i==11 || i==16 || i==17 || i==18 || i==19 ){
                pixels.setPixelColor(i, pixels.Color(
                    (colorTablePadOne[colorIndexOne][0]*padOnePeak*lfoPeakVal*yposColorAltOne)+1,
                    (colorTablePadOne[colorIndexOne][1]*padOnePeak*lfoPeakVal*yposColorAltOne),
                    (colorTablePadOne[colorIndexOne][2]*padOnePeak*lfoPeakVal*yposColorAltOne)+1
                ));
            }else{
                pixels.setPixelColor(i, pixels.Color(
                    (colorTablePadTwo[colorIndexTwo][0]*padTwoPeak*lfoPeakVal*yposColorAltTwo)+1,
                    (colorTablePadTwo[colorIndexTwo][1]*padTwoPeak*lfoPeakVal*yposColorAltTwo),
                    (colorTablePadTwo[colorIndexTwo][2]*padTwoPeak*lfoPeakVal*yposColorAltTwo)+1
                ));
            }
        }
        pixels.show(); 
    }
    if((millis() - changeStamp) > 1000 && octDisplayFlag){
        octDisplayFlag = false;
        lightsOut();
    }


    //KNOBS//SWITCHES//BUTTON
    for(int i = 0; i < 16; i ++){
        if(i < 13){
            analogValues[i] = readMux(i);
            if (abs(analogValues[i] - analogValuesLag[i]) > 15 || firstRun){
                switch (i) {
                    case 12: 
                        if(drumMode){
                            kickDrum.frequency(map(analogValues[i], 0, 1023, 40, 150));
                            kickFM.frequency(map(analogValues[i], 0, 1023, 40, 150));
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                kickPitch[seqStep] = map(analogValues[i], 0, 1023, 40, 150);
                                kickPitchFM[seqStep] = map(analogValues[i], 0, 1023, 40, 150);
                            }
                        }else{
                            attackTime = analogValues[i]+1;
                        }
                        break;
                    case 11:
                        if(drumMode){
                            kickDrum.length(analogValues[i]);
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                kickLength[seqStep] = analogValues[i];
                            }
                        }else{
                            decayTime = analogValues[i]+1;
                        }
                        break;
                    case 10:
                        if(drumMode){
                            snareDrum.frequency(map(analogValues[i], 0, 1023, 100, 800));
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                snarePitch[seqStep] = map(analogValues[i], 0, 1023, 100, 800);
                            }
                        }else{
                            detune = mapfloat(analogValues[i], 0, 1023, .98, 1.02);
                        }
                        break;
                    case 9:
                        if(drumMode){
                            snareRelease = analogValues[i]/2;
                            snareDrum.length(analogValues[i]/2);
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                snareLength[seqStep] = analogValues[i]/2;
                                snareLengthNoise[seqStep] = analogValues[i]/2;
                            }
                        }else{
                            noise.amplitude(analogValues[i]/2046);
                        }
                        break;
                    case 8:
                        finalStage.gain(0,analogValues[i]/1023);
                        break;
                    case 2:
                        if(drumMode){
                            mainDrumFilter.frequency(analogValues[i]*9);
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                drumFilter[seqStep] = analogValues[i]*9;
                            }
                        }else{
                            padOneFilter.frequency(analogValues[i]*9);
                            padTwoFilter.frequency(analogValues[i]*9);
                        }
                        break;
                    case 3:
                        if(drumMode){
                            mainDrumFilter.resonance((analogValues[i]/260)+.7); 
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                drumRes[seqStep] = (analogValues[i]/260)+.7;
                            }
                        }else{
                            padOneFilter.resonance((analogValues[i]/260)+.7);
                            padTwoFilter.resonance((analogValues[i]/260)+.7);
                        }
                        break;
                    case 4:
                        if(drumMode){
                            drumLFO.frequency(analogValues[i]/50);
                            drumLfoIndex = analogValues[i]/204.6;
                            drumLfoIndex = constrain(drumLfoIndex, 0, 4);
                        }else{
                            if(seqPlay){
                                lfoIndex = analogValues[i]/204.6;
                                lfoIndex = constrain(lfoIndex, 0, 4);
                            }else{
                                lfo.frequency(analogValues[i]/50);
                            }
                        }
                        break;
                    case 5:
                        if(drumMode){
                            drumLFO.amplitude(analogValues[i]/1023);
                        }else{
                            lfo.amplitude(analogValues[i]/1023);
                        }
                        break;
                    case 6:
                        if(drumMode){
                            hhFilter.frequency(analogValues[i]*9);
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                hhTone[seqStep] = analogValues[i]*9;
                            }
                        }else{
                            delay1.delay(0, analogValues[i]/2.4);
                        }
                        break;
                    case 7:
                        if(drumMode){
                            hhRelease = analogValues[i]/4;
                            if(seqPlay && (padOneNoteOn || padTwoNoteOn)){
                                hhLength[seqStep] = analogValues[i]/4;
                            }
                        }else{
                            delayMixStage.gain(3,analogValues[i]/1023);
                        }
                        break;
                    case 1:
                        if(!drumMode){
                            octIndex = analogValues[i]/204;
                            octIndex = constrain(octIndex, 0, 4);
                            octave = octArray[octIndex];
                            changeStamp = millis();
                            octDisplayFlag = true;
                            lightsOut();
                            if(octIndex==0){
                                pixels.setPixelColor(0, pixels.Color(0, 72, 255));
                                pixels.setPixelColor(8, pixels.Color(0, 72, 255));
                                pixels.setPixelColor(16, pixels.Color(0, 72, 255));
                            }
                            if(octIndex==1){
                                pixels.setPixelColor(1, pixels.Color(208, 255, 0));
                                pixels.setPixelColor(9, pixels.Color(208, 255, 0));
                                pixels.setPixelColor(17, pixels.Color(208, 255, 0));
                            }
                            if(octIndex==2){
                                pixels.setPixelColor(2, pixels.Color(80, 255, 0));
                                pixels.setPixelColor(10, pixels.Color(80, 255, 0));
                                pixels.setPixelColor(18, pixels.Color(80, 255, 0));
                            }
                            if(octIndex==3){
                                pixels.setPixelColor(3, pixels.Color(255, 0, 250));
                                pixels.setPixelColor(11, pixels.Color(255, 0, 250));
                                pixels.setPixelColor(19, pixels.Color(255, 0, 250));
                            }
                            if(octIndex==4){
                                pixels.setPixelColor(4, pixels.Color(255, 0, 80));
                                pixels.setPixelColor(12, pixels.Color(255, 0, 80));
                                pixels.setPixelColor(20, pixels.Color(255, 0, 80));
                            }
                            pixels.show();
                        }else{
                            seqInterval = 1023 - analogValues[i];
                            serialMetro.interval(seqInterval);
                        }
                        break;
                    case 0:
                        delayMixStage.gain(2, analogValues[i]/511);
                        //glideTime = analogValues[i]/2;
                        break;
                    default:
                        break;
                }
                analogValuesLag[i] = analogValues[i];
            }
        }else{
            digitalValues[i] = readMux(i);
            switch (i) {
                case 13:
                    if(digitalValues[i] == LOW){
                        drumMode = false;
                    }else{
                        drumMode = true;
                    }
                    break;
                case 14:
                    if(digitalValues[i] == LOW){
                        if(drumMode){
                            seqPage = 0;
                        }else{
                            yPosAlt = true;
                        }
                    }else{
                        if(drumMode){
                            seqPage = 8;
                        }else{
                            yPosAlt = false;
                            yPosBendOne = 1;
                            yPosBendTwo = 1;
                        }
                    }
                    break;
                case 15:
                    if (wavTrig.update()){
                        if (wavTrig.fallingEdge()){
                            if(drumMode){
                                seqPlay = !seqPlay;
                                serialMetro.reset();
                                seqStep = 0;
                            }else{
                                wavDisplayFlag = true;
                                wavIndex++;
                                if(wavIndex > 3){
                                    wavIndex = 0;
                                }
                                padOneWavOne.begin(waveShapes[wavIndex]);
                                padOneWavTwo.begin(waveShapes[wavIndex]);
                                padTwoWavOne.begin(waveShapes[wavIndex]);
                                padTwoWavTwo.begin(waveShapes[wavIndex]);

                                switch (wavIndex) {
                                    case 0:
                                        //TRIANGLE
                                        for(int i=0; i<24; i++){
                                            if(i==3||i==4||i==10||i==13||i==16||i==17||i==22||i==23){
                                                pixels.setPixelColor(i, pixels.Color(255, 0, 225));
                                            }else{
                                                pixels.setPixelColor(i, pixels.Color(0, 0, 0));
                                            }
                                        }
                                        pixels.show();
                                        break;
                                    case 1:
                                        //SAW
                                        for(int i=0; i<24; i++){
                                            if(i==0||i==1||i==4||i==5||i==8||i==10||i==12||i==14||i==16||i==19||i==20||i==23){
                                                pixels.setPixelColor(i, pixels.Color(255, 0, 225));
                                            }else{
                                                pixels.setPixelColor(i, pixels.Color(0, 0, 0));
                                            }
                                        }
                                        pixels.show();
                                        break;
                                    case 2:
                                        //SQUARE
                                        for(int i=0; i<24; i++){
                                            if(i==0||i==1||i==2||i==3||i==7||i==11||i==15||i==19||i==20||i==21||i==22||i==23){
                                                pixels.setPixelColor(i, pixels.Color(255, 0, 225));
                                            }else{
                                                pixels.setPixelColor(i, pixels.Color(0, 0, 0));
                                            }
                                        }
                                        pixels.show();
                                        break;
                                    case 3:
                                        //STRING
                                        for(int i=0; i<24; i++){
                                            if (i % 2) { 
                                                pixels.setPixelColor(i, pixels.Color(255, 0, 225));
                                            }else{
                                                 pixels.setPixelColor(i, pixels.Color(0, 0, 0));
                                            }
                                        }
                                        pixels.show();
                                        break;
                                    default:
                                        break;
                                }
                            }
                        }else if (wavTrig.risingEdge()){
                            wavDisplayFlag = false;
                        }
                    }
                    break;
                default:
                    break;
            }
        }
    }
    //Mix between Drums and synth
    if(drumMode == true){
        oscStringMixer.gain(0, 0);
        oscStringMixerTwo.gain(0, 0);
        oscStringMixer.gain(0,0);
        oscStringMixerTwo.gain(0,0);
    }else if(wavIndex == 3){
        //Mix between synth and string
        oscStringMixer.gain(0, 0);
        oscStringMixerTwo.gain(0, 0);
        oscStringMixer.gain(1, .3);
        oscStringMixerTwo.gain(1, .3);
    }else{
        oscStringMixer.gain(0, .3);
        oscStringMixerTwo.gain(0, .3);
        oscStringMixer.gain(1, 0);
        oscStringMixerTwo.gain(1, 0);
    }


    //DRUMS
    if(seqPlay){
        //Sync LFO
        lfo.frequency((1/seqInterval)*lfoTimeMathArray[lfoIndex]);
        drumLFO.frequency((1/seqInterval)*lfoTimeMathArray[drumLfoIndex]);

        if (serialMetro.check() == 1) {
            seqStep++;
        }
        if (seqStep >= 16){
            seqStep = 0;
            lfo.phase(180);
            drumLFO.phase(180);
        }
        //Play da Drums
        if(abs(seqStep - prevSeqStep) > 0){
            if(kickSteps[seqStep]){
                kickDrum.noteOn();
            }
            if(snareSteps[seqStep]){
                snareEnv.amplitude(.5, 0);
                snareEnv.amplitude(0, snareRelease);
                snareDrum.noteOn();
            }
            if(hhSteps[seqStep]){
                hhEnv.amplitude(.5,0);
                hhEnv.amplitude(0,hhRelease);
            }
            //Drum Automation
            if(kickPitch[seqStep] > 0){
                kickDrum.frequency(kickPitch[seqStep]);
                kickFM.frequency(kickPitchFM[seqStep]);
            }
            if(kickLength[seqStep] > 0){
                kickDrum.length(kickLength[seqStep]);
            }
            if(snarePitch[seqStep] > 0){
                snareDrum.frequency(snarePitch[seqStep]);
            }
            if(snareLength[seqStep] > 0){
                snareDrum.length(snareLength[seqStep]);
                snareRelease = snareLength[seqStep];
            }
            if(hhTone[seqStep] > 0){
                hhFilter.frequency(hhTone[seqStep]);
            }
            if(hhLength[seqStep] > 0){
                hhRelease = hhLength[seqStep];
            }
            if(drumFilter[seqStep] > 0){
                mainDrumFilter.frequency(drumFilter[seqStep]);
            }
            if(drumRes[seqStep] > 0){
                mainDrumFilter.resonance(drumRes[seqStep]);
            }
        }
        //SEQ lights
        if(drumMode){
            if(abs(seqStep - prevSeqStep) > 0){
                //One instance per step
                if(padOneNoteOn ||  padTwoNoteOn){
                    drumLights(255,0,0);
                }else{
                    drumLights(1,1,1);
                }
                if(seqStep < 8){
                    pixels.setPixelColor(seqStep, pixels.Color(0, 157, 168));
                }else if(seqStep >= 8 && seqStep < 16){
                    pixels.setPixelColor(seqStep, pixels.Color(0, 168, 33));
                }else{
                    pixels.setPixelColor(seqStep, pixels.Color(168, 0, 117));
                }
                pixels.show();
            }
            if(padOneNoteOn && padTwoNoteOn){
                clearAll();
            }
        }
        prevSeqStep = seqStep;
    }else{
        if(drumMode){
            //Display Steps
            for(int i=0; i<8; i++){
                if(kickSteps[i+seqPage]){
                    pixels.setPixelColor(i, pixels.Color(0, 157, 168));
                }else{
                    pixels.setPixelColor(i, pixels.Color(10,10,10));
                }
                if(snareSteps[i+seqPage]){
                    pixels.setPixelColor(i+8, pixels.Color(0, 168, 33));
                }else{
                    pixels.setPixelColor(i+8, pixels.Color(10,10,10));
                } 
                if(hhSteps[i+seqPage]){
                    pixels.setPixelColor(i+16, pixels.Color(168, 0, 117));
                }else{
                    pixels.setPixelColor(i+16, pixels.Color(10,10,10));
                }
                pixels.show();
            }
        }
    }
    


    firstRun = false;
}
void setStep(int xPos, int xPrevPos, int yPos, bool drumPadOne){

    if(drumPadOne){
        xPos = map(xPos, 60, 750, 0, 3);
        xPrevPos = map(xPrevPos, 60, 750, 0, 3);
        yPos = mapfloat(yPos, 300, 800, 2, 0);
        if(abs(xPos - xPrevPos) > 0 || !padOneNoteOn){
            //KICK
            switch (yPos) {
                case 2:
                    //KICK
                    kickSteps[xPos+seqPage] = !kickSteps[xPos+seqPage];
                    
                    if(kickSteps[xPos+seqPage]){
                        pixels.setPixelColor(xPos, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos, pixels.Color(0, 157, 168));
                    }
                    pixels.show();
                    break;
                case 1:
                    //SNARE
                    snareSteps[xPos+seqPage] = !snareSteps[xPos+seqPage];
                    
                    if(snareSteps[xPos+seqPage]){
                        pixels.setPixelColor(xPos+8, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos+8, pixels.Color(0, 168, 33));
                    }
                    pixels.show();
                    break;
                case 0:
                    //HH
                    hhSteps[xPos+seqPage] = !hhSteps[xPos+seqPage];
                    
                    if(hhSteps[xPos+seqPage]){
                        pixels.setPixelColor(xPos+16, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos+16, pixels.Color(168, 0, 117));
                    }
                    pixels.show();
                    break;
                default:
                    break;
            }
            xPrevPos = xPos;


        }
    }else{
        xPos = map(xPos, 60, 750, 0, 3);
        xPrevPos = map(xPrevPos, 60, 750, 0, 3);
        yPos = mapfloat(yPos, 300, 800, 2, 0);
        if(abs(xPos - xPrevPos) > 0 || !padTwoNoteOn){
            switch (yPos) {
                case 2:
                    //KICK
                    kickSteps[xPos+4+seqPage] = !kickSteps[xPos+4+seqPage];
                    
                    if(kickSteps[xPos+4+seqPage]){
                        pixels.setPixelColor(xPos+4, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos+4, pixels.Color(0, 157, 168));
                    }
                    pixels.show();
                  
                    break;
                case 1:
                    //SNARE
                    snareSteps[xPos+4+seqPage] = !snareSteps[xPos+4+seqPage];
                    
                    if(snareSteps[xPos+4+seqPage]){
                        pixels.setPixelColor(xPos+12, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos+12, pixels.Color(0, 168, 33));
                    }
                    pixels.show();
                    break;                    
                case 0:
                    //HH
                    hhSteps[xPos+4+seqPage] = !hhSteps[xPos+4+seqPage];
                    Serial.println(xPos);
                    if(hhSteps[xPos+4+seqPage]){
                        pixels.setPixelColor(xPos+20, pixels.Color(250, 255, 0));
                    }else{
                        pixels.setPixelColor(xPos+20, pixels.Color(168, 0, 117));
                    }
                    pixels.show();
                    break;
                default:
                    break;
            }
            xPrevPos = xPos;
        }
    }
}
void clearAll(){
    for(int i=0; i<16; i++){
        kickSteps[i] = false;
        snareSteps[i] = false;
        hhSteps[i] = false;

        kickPitch[i] = 0;
        kickPitchFM[i] = 0;
        kickLength[i] = 0;

        snarePitch[i] = 0;
        snareLength[i] = 0;
        snareLengthNoise[i] = 0;

        hhTone[i] = 0;
        hhLength[i] = 0;

        drumFilter[i] = 0;
        drumRes[i] = 0;

    }
}