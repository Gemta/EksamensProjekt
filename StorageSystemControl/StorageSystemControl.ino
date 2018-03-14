int pinMotorMoveOut = 13;
int pinMotorMoveIn = 12;
int pinMagnetOn = 11;
int pinMagnetOff = 10;
int pinItemRetrieved = 9;

void setup() {
  pinMode(pinMotorMoveOut, OUTPUT);
  pinMode(pinMotorMoveIn, OUTPUT);
  pinMode(pinMagnetOn, OUTPUT);
  pinMode(pinMagnetOff, OUTPUT);
  pinMode(pinItemRetrieved, INPUT);
}

void retriveItem(){
  
}

void storeItem(){


}

void loop() {
  if (Serial.available() > 0){
    auto Data = Serial.readString();
    


      
    }
}



