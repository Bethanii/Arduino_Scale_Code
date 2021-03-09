//Jason below
#include "HX711.h"
#include <HX711.h>
#include <LiquidCrystal.h>

#define DT A1
#define SCK A0

const int rs=7, e=6, db4=10, db5=11, db6=12, db7=13;
long cal_factor = 34.875;
float gram; 

HX711 scale;
LiquidCrystal lcd(7, 6, 10, 11, 12, 13);
const int pin_DT = 4;
const int pin_SCK = 5;

//Jacob below
void setup() {
  Serial.begin(57600);
  lcd.begin(16,2);
  scale.begin(pin_DT, pin_SCK);
  scale.set_scale(cal_factor);
  long zero_factor = scale.read_average();
}

// Bethany below
void loop(){ 
    long reading = scale.read_average() * cal_factor;
    float gram =(float)reading/1000000;
    gram = gram;
    gram = float(gram*-1);
    Serial.println(gram); 
    Serial.print("Grams");
    }
