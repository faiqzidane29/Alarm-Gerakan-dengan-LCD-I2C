#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  

const int buzzer = 13;
const int led = 12;
const int pir = 11;
const int suara = 262;

bool deteksiGerakan = false;

void tampilkanPesanLCD(const char* pesan) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(pesan);
}

void setup(){
  lcd.init();
  lcd.backlight(); 

  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);

  digitalWrite(led, LOW);
  noTone(buzzer);

  tampilkanPesanLCD("Sistem Siap");
  delay(2000);
  tampilkanPesanLCD("Menunggu gerakan");
}

void loop(){
  int nilaiPir = digitalRead(pir);

  if(nilaiPir == HIGH){
    if(!deteksiGerakan){
      tampilkanPesanLCD("Ada maling woy");
      deteksiGerakan = true;
    }
    digitalWrite(led, HIGH);
    tone(buzzer, suara);
    delay(200);

    digitalWrite(led, LOW);
    noTone(buzzer);
    delay(200);
    
  } else {
    if(deteksiGerakan){
      tampilkanPesanLCD("Mendeteksi");
      deteksiGerakan = false;  
    }

    digitalWrite(led, LOW);
    noTone(buzzer);
  }
}
