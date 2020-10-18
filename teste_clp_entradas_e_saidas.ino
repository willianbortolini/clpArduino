// declaração das entradas
const int e13 =  13;
const int ea0 =  A0;
const int ea1 =  A1;
const int ea2 =  A2;
const int ea3 =  A3;
const int ea6 =  A6;
const int ea7 =  A7;
const int e2 =  2;
const int e3 =  3;

//declaração das saidas
const int s11 = 11;
const int s10 = 10;
const int s9 = 9;
const int s8 = 8;
const int s7 = 7;
const int s6 = 6;
const int s5 = 5;   

long tempo = 0;
void setup() {
  Serial.begin(9600);

//inicializando entradas
pinMode(e13, INPUT);
pinMode(ea0, INPUT);
pinMode(ea1, INPUT);
pinMode(ea2, INPUT);
pinMode(ea3, INPUT);
pinMode(ea6, INPUT);
pinMode(ea7, INPUT);
pinMode(e2, INPUT);
pinMode(e3, INPUT);

//inicializando as saidas
pinMode(s11, OUTPUT);
pinMode(s10, OUTPUT);
pinMode(s9, OUTPUT);
pinMode(s8, OUTPUT);
pinMode(s7, OUTPUT);
pinMode(s6, OUTPUT);
pinMode(s5, OUTPUT);

}

void loop() {
  if(digitalRead(e13)){
    Serial.println("Entrada 13 ligada");
  }
  if(digitalRead(ea0)){
    Serial.println("Entrada A0 ligada");
  }
  if(digitalRead(ea1)){
    Serial.println("Entrada A1 ligada");
  }
  if(digitalRead(ea2)){
    Serial.println("Entrada A2 ligada");
  }
  if(digitalRead(ea3)){
    Serial.println("Entrada A3 ligada");
  }
  if(analogRead(ea6) > 250){
    Serial.println("Entrada A6 ligada");
  }
  if(analogRead(ea7) > 250){
    Serial.println("Entrada A7 ligada");
  }
  if(digitalRead(e2)){
    Serial.println("Entrada 2 ligada");
  }
  if(digitalRead(e3)){
    Serial.println("Entrada 3 ligada");
  }

  if(millis() - tempo < 1000){
    digitalWrite(s11, HIGH);
    digitalWrite(s10, HIGH);
    digitalWrite(s9, HIGH);
    digitalWrite(s8, HIGH);
    digitalWrite(s7, HIGH);
    digitalWrite(s6, HIGH);
    digitalWrite(s5, HIGH);  
  }
  if(millis() - tempo > 1000){
    digitalWrite(s11, LOW);
    digitalWrite(s10, LOW);
    digitalWrite(s9, LOW);
    digitalWrite(s8, LOW);
    digitalWrite(s7, LOW);
    digitalWrite(s6, LOW);
    digitalWrite(s5, LOW);
  }
  if(millis() - tempo > 2000){    
    tempo = millis();  
  }
  
}
