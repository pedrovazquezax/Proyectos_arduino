int rojo=2,amarillo=3,verde=4,entrada=5;
int estado=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(rojo,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(entrada,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(entrada)){
    if (estado==0){
     ponerLuz(LOW,LOW,HIGH);
     
      estado=1;
      }
       else if(estado==1){
      ponerLuz(LOW,HIGH,HIGH);
      estado=2;
      }
      else if(estado==2){
      ponerLuz(LOW,HIGH,LOW);
      estado=3;
      }
      else if(estado==3){
       ponerLuz(HIGH,LOW,LOW);
      estado=0;
      }
      delay(1000);
      
    }

}
void ponerLuz(int erojo,int eamarillo,int everde){
 digitalWrite(rojo,erojo); 
 digitalWrite(amarillo,eamarillo); 
  digitalWrite(verde,everde); 
 }
