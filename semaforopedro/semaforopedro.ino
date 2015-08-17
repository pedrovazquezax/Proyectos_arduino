int rojo=2,amarillo=3,verde=4;

void setup() {
  // put your setup code here, to run once:
 pinMode(rojo,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(verde,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

      ponerLuz(HIGH,LOW,LOW);
          delay(5000);
      

      ponerLuz(LOW,LOW,HIGH);
         delay(5000);
      ponerLuz(LOW,HIGH,LOW);
 
      delay(5000);
      
    

}
void ponerLuz(int erojo,int eamarillo,int everde){
 digitalWrite(rojo,erojo); 
 digitalWrite(amarillo,eamarillo); 
  digitalWrite(verde,everde); 
 }
