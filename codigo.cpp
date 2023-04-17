int IN1 =2; 
int IN2 =3;
int IN3 =4; 
int IN4 =5;
void setup(){
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    
}
void loop(){
   frente();
   delay(3000);
   parar();
   delay(1500);
   re();
   delay(3000);
   parar();
   delay(1500);
   direita();
   delay(2000);
   
  parar();
  delay(1500);
  esquerda();
  delay(2000);
  parar();
  delay(1500);
    
}

void frente(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    
}
void re(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    
}
void parar(){
    digitalWrite(IN1,0);
    digitalWrite(IN2,0);
    digitalWrite(IN3,0);
    digitalWrite(IN4,0);
    
}
void esquerda(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    
}
void direita(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    
}

#BOF