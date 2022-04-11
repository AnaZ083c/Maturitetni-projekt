#include <Servo.h>
#include <time.h>

/*class L_Servo {
  Servo servo;
  int act = 5;
  
  public:
    void C(Servo &servo, int actuator);
    void D(Servo &servo, int actuator);
    void E(Servo &servo, int actuator);
    void _F(Servo &servo, int actuator);
    void G(Servo &servo, int actuator);
    void A(Servo &servo, int actuator);
}*/

// Servo motorja
Servo l_servo;
Servo r_servo;

// Linearna aktuatorja
int l_act = 5;
int r_act = 3;

int pos = 0;

void setup() {
  // SERVO MOTORJA
  l_servo.attach(12);
  r_servo.attach(11);

  // AKTUATORJA
  pinMode(l_act, OUTPUT);
  pinMode(r_act, OUTPUT);

  Serial.begin(9600);
}

void rotate(int beg_pos, int end_pos, int _speed, Servo &servo);
void hit(int _speed, int actuator);
void hit(int actuator);

// TIPKE -------------------------------------------------
// Leva
void C (Servo &servo, int actuator, int del = 310);
void D (Servo &servo, int actuator, int del = 310);
void E (Servo &servo, int actuator, int del = 310);
void _F(Servo &servo, int actuator, int del = 310);
void G (Servo &servo, int actuator, int del = 310);
void A (Servo &servo, int actuator, int del = 310);

// Desna
void H (Servo &servo, int actuator, int del = 310);
void C2(Servo &servo, int actuator, int del = 310);
void D2(Servo &servo, int actuator, int del = 310);
void E2(Servo &servo, int actuator, int del = 310);
void F2(Servo &servo, int actuator, int del = 310);
void G2(Servo &servo, int actuator, int del = 310);

// Muzika
void Kuza_Pazi(Servo &l_servo, Servo &r_servo, int l_act, int r_act);
void Glasbena_lestvica(Servo &l_servo, Servo &r_servo, int l_act, int r_act);
void Little_Star(Servo &l_servo, Servo &r_servo, int l_act, int r_act);
void Sveta_Noc(Servo &l_servo, Servo &r_servo, int l_act, int r_act);

// Druge funkcije
void call_function(char function, Servo &l_servo, Servo &r_servo, int l_act, int r_act);

// GLAVNA ZANKA ------------------------------------------
void loop() {
  if (Serial.available()) {
    char function = Serial.read();
    call_function(function, l_servo, r_servo, l_act, r_act);
  }
}


// FUNKCIJE ----------------------------------------------
// Funkcije za Qt
void call_function(char function, Servo &l_servo, Servo &r_servo, int l_act, int r_act) {

  // Izbor pesmi
  if (function == '1') {
     Kuza_Pazi(l_servo, r_servo, l_act, r_act);
     return;
  }

  else if (function == '2') {
     Glasbena_lestvica(l_servo, r_servo, l_act, r_act);
     return;
  }
    
  else if (function == '3') {
     Little_Star(l_servo, r_servo, l_act, r_act);
     return;
  }
      
  else if (function == '4') {
     Sveta_Noc(l_servo, r_servo, l_act, r_act);
     return;
  }
   
  else if (function == '5'){
     Kuza_Pazi(l_servo, r_servo, l_act, r_act); delay(500);
     Glasbena_lestvica(l_servo, r_servo, l_act, r_act); delay(500);
     Little_Star(l_servo, r_servo, l_act, r_act); delay(500);
     Sveta_Noc(l_servo, r_servo, l_act, r_act);
     return;
  }


  // Tipke
  else if (function == 'a') {
     G2(r_servo, r_act);
     return;
  }

  else if (function == 's') {
    F2(r_servo, r_act);
    return;
  }

  else if (function == 'd') {
    E2(r_servo, r_act);
    return;
  }

  else if (function == 'f') {
    D2(r_servo, r_act);
    return;
  }

  else if (function == 'g') {
    C2(r_servo, r_act);
    return;
  }

  else if (function == 'h') {
    H(r_servo, r_act);
    return;
  }

  else if (function == 'j') {
    A(l_servo, l_act);
    return;
  }

  else if (function == 'k') {
    G(l_servo, l_act);
    return;
  }

  else if (function  == 'l') {
    _F(l_servo, l_act);
    return;
  }

  else if (function == 126) {
    E(l_servo, l_act);
    return;
  }

  else if (function == 125) {
    D(l_servo, l_act);
    return;
  }

  else if (function == 96) {
    C(l_servo, l_act);
    return;
  }

  return;
}

// Leva Stran
void C(Servo &servo, int actuator, int del = 310) {
  servo.write(100);
  delay(del);
  hit(13, actuator);
}

void D(Servo &servo, int actuator, int del = 310) {
  servo.write(86);
  delay(del);
  hit(13, actuator);
}

void E(Servo &servo, int actuator, int del = 310) {
  servo.write(75);
  delay(del);
  hit(13, actuator);
}

void _F(Servo &servo, int actuator, int del = 310) {
  servo.write(63);
  delay(del);
  hit(13, actuator);
}

void G(Servo &servo, int actuator, int del = 310) {
  servo.write(50);
  delay(del);
  hit(13, actuator);
}

void A(Servo &servo, int actuator, int del = 310) {
  servo.write(38);
  delay(del);
  hit(13, actuator);
}

// Desna Stran
void H(Servo &servo, int actuator, int del = 310) {
  servo.write(123);
  delay(del);
  hit(13, actuator);
}

void C2(Servo &servo, int actuator, int del = 310) {
  servo.write(112);
  delay(del);
  hit(13, actuator);
}

void D2(Servo &servo, int actuator, int del = 310) {
  servo.write(98);
  delay(del);
  hit(13, actuator);
}

void E2(Servo &servo, int actuator, int del = 310) {
  servo.write(85);
  delay(del);
  hit(13, actuator);
}

void F2(Servo &servo, int actuator, int del = 310) {
  servo.write(72);
  delay(del);
  hit(13, actuator);
}

void G2(Servo &servo, int actuator, int del = 310) {
  servo.write(60);
  delay(del);
  hit(13, actuator);
}

// Funkcija za testiranje
void rotate(int beg_pos, int end_pos, int _speed, Servo &servo) {
    for (pos = end_pos; pos <= beg_pos; pos += 1){
      servo.write(pos);
      delay(_speed);
    }
    
    for (pos = beg_pos; pos >= end_pos; pos -= 1){
      servo.write(pos);
      delay(_speed);
    }
}


// Funkcija za aktuatorje
void hit(int _speed, int actuator) {
  digitalWrite(actuator, HIGH);
  delay(_speed);
  
  digitalWrite(actuator, LOW);
  delay(_speed);
}


// Funkcije za muziko
void Sveta_Noc(Servo &l_servo, Servo &r_servo, int l_act, int r_act) {
  // G A G E x2
  for (int i = 0; i < 2; i++) {
    G(l_servo, l_act);
    delay(610);
  
    A(l_servo, l_act);
    delay(50);
  
    G(l_servo, l_act);
    delay(350);
  
    E(l_servo, l_act);
    delay(1400);
  }

  //DD H
  D2(r_servo, r_act);
  delay(620);
  D2(r_servo, r_act);
  delay(200);

  H(r_servo, r_act);
  delay(1400);

  //CC G
  C2(r_servo, r_act);
  delay(620);
  C2(r_servo, r_act);
  delay(200);

  G(l_servo, l_act);
  delay(1400);

  for (int i = 0; i < 2; i++) {
    // AA C H A
    A(l_servo, l_act);
    delay(700);
    A(l_servo, l_act);
    delay(150);
  
    C2(r_servo, r_act);
    delay(610);
    
    H(r_servo, r_act);
    delay(50);
  
    A(l_servo, l_act);
    delay(300);
  
    //G A G E
    G(l_servo, l_act);
    delay(610);
  
    A(l_servo, l_act);
    delay(50);
  
    G(l_servo, l_act);
    delay(350);
  
    E(l_servo, l_act);
    delay(1400);
  }
 
  for (int i = 0; i < 2; i++) {
    //(DD F D H C E)2
    D2(r_servo, r_act);
    delay(700);
    D2(r_servo, r_act);
    delay(150);
  
    F2(r_servo, r_act);
    delay(200);
    
    D2(r_servo, r_act);
    delay(200);
  
    H(r_servo, r_act);
    delay(200);
  
    C2(r_servo, r_act);
    delay(1400);
  
    E2(r_servo, r_act);
    delay(1400);
  
    //C2 G E G F D C
    C2(r_servo, r_act);
    delay(200);
  
    G(l_servo, l_act);
    delay(200);
  
    E(l_servo, l_act);
    delay(200);
  
    G(l_servo, l_act);
    delay(620);
  
    _F(l_servo, l_act);
    delay(50);
  
    D(l_servo, l_act);
    delay(350);
  
    C(l_servo, l_act);
    delay(1400);
  }
}

void Little_Star(Servo &l_servo, Servo &r_servo, int l_act, int r_act) {
  // CC GG AA G FF EE DD C
  C(l_servo, l_act);
  delay(200);
  C(l_servo, l_act);
  delay(200);

  G(l_servo, l_act);
  delay(200);
  G(l_servo, l_act);
  delay(200);

  A(l_servo, l_act);
  delay(200);
  A(l_servo, l_act);
  delay(200);

  G(l_servo, l_act);
  delay(650);

  _F(l_servo, l_act);
  delay(200);
  _F(l_servo, l_act);
  delay(200);

  E(l_servo, l_act);
  delay(200);
  E(l_servo, l_act);
  delay(200);

  D(l_servo, l_act);
  delay(200);
  D(l_servo, l_act);
  delay(200);

  C(l_servo, l_act);
  delay(650);

  // GG FF EE D x2
  for (int i = 0; i < 2; i++) {
    G(l_servo, l_act);
    delay(200);
    G(l_servo, l_act);
    delay(200);
  
    _F(l_servo, l_act);
    delay(200);
    _F(l_servo, l_act);
    delay(200);
  
    E(l_servo, l_act);
    delay(200);
    E(l_servo, l_act);
    delay(200);
  
    D(l_servo, l_act);
    delay(650);
  }
  
  // ZAČETEK
  C(l_servo, l_act);
  delay(200);
  C(l_servo, l_act);
  delay(200);

  G(l_servo, l_act);
  delay(200);
  G(l_servo, l_act);
  delay(200);

  A(l_servo, l_act);
  delay(200);
  A(l_servo, l_act);
  delay(200);

  G(l_servo, l_act);
  delay(650);

  _F(l_servo, l_act);
  delay(200);
  _F(l_servo, l_act);
  delay(200);

  E(l_servo, l_act);
  delay(200);
  E(l_servo, l_act);
  delay(200);

  D(l_servo, l_act);
  delay(200);
  D(l_servo, l_act);
  delay(200);

  C(l_servo, l_act);
}

void Glasbena_lestvica(Servo &l_servo, Servo &r_servo, int l_act, int r_act) {
  C(l_servo, l_act);
  delay(500);

  D(l_servo, l_act);
  delay(500);

  E(l_servo, l_act);
  delay(500);

  _F(l_servo, l_act);
  delay(500);

  G(l_servo, l_act);
  delay(500);

  A(l_servo, l_act);
  delay(500);

  H(r_servo, r_act);
  delay(500);
  
  C2(r_servo, r_act);
  delay(500);

  D2(r_servo, r_act);
  delay(500);

  E2(r_servo, r_act);
  delay(500);

  F2(r_servo, r_act);
  delay(500);

  G2(r_servo, r_act);
  delay(500);
}

void Kuza_Pazi(Servo &l_servo, Servo &r_servo, int l_act, int r_act) {
  for (int i = 0; i < 2; i++) {
    C(l_servo, l_act, 100);
    C2(r_servo, r_act, 100);
    delay(200);
    C2(r_servo, r_act);
    delay(200);
    C2(r_servo, r_act);
    delay(200);
    C2(r_servo, r_act);
    delay(200);
  
    D(l_servo, l_act, 100);
    D2(r_servo, r_act, 100);
    delay(200);
    D2(r_servo, r_act);
    delay(200);
    D2(r_servo, r_act);
    delay(200);
    D2(r_servo, r_act);
    delay(200);
  
    E(l_servo, l_act, 100);
    E2(r_servo, r_act, 100);
    delay(200);
    E2(r_servo, r_act);
    delay(200);
  
    D(l_servo, l_act, 100);
    D2(r_servo, r_act, 100);
    delay(200);
    D2(r_servo, r_act);
    delay(200);
  
    C(l_servo, l_act, 100);
    C2(r_servo, r_act, 100);
    delay(200);
    C2(r_servo, r_act);
    delay(200);
    C2(r_servo, r_act);
    delay(500);
  }
}
