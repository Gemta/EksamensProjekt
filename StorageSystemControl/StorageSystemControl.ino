int pin_motor_moveout = 13;
int pin_motor_movein = 12;
int pin_motor_up = 11;
int pin_motor_down = 10;
int pin_magneton = 9;
int pin_magnetoff = 8;
int pin_extend = 7;
int pin_extract = 6;

String item_retrieve;

void setup() {
  pinMode(pin_motor_moveout, OUTPUT);
  pinMode(pin_motor_movein, OUTPUT);
  pinMode(pin_motor_up, OUTPUT);
  pinMode(pin_motor_down, OUTPUT);
  pinMode(pin_magneton, OUTPUT);
  pinMode(pin_magnetoff, OUTPUT);
  pinMode(pin_extend, OUTPUT);
  pinMode(pin_extract, OUTPUT);
}

void retriveItem(){

  //Moves out to location


  //
  digitalWrite(pinExtend, HIGH);
  delay(1000);
  digitalWrite(pinMagnetOn, HIGH);
  delay(500);
  digitalWrite(pinExtract, HIGH);

  //Move back to starting area


}

void storeItem(){


}

void loop() {

  if(Serial.available() > 0){
    auto Data = Serial.readString();
    if(Data = "store"){
      storeItem();
    }
    else if(Data = item_retrieve){
      retrieveItem();
    }
    else if(Data != "store" || itemRetrieve){
      Serial.println("Item not found, or command not valid.");
    }
  }
  
}



