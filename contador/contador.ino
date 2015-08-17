
int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
int entrada=9;
int estado=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(entrada,INPUT);
 
}

void loop() {


  if (digitalRead(entrada)){
    if (estado==0){
      prender(LOW,LOW,LOW,LOW,LOW,LOW,HIGH);
      estado=1;
      }
       else if(estado==1){
      prender(HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH);
      estado=2;
      }
      else if(estado==2){
      prender(LOW,LOW,HIGH,LOW,LOW,HIGH,LOW);
      estado=3;
      }
      else if(estado==3){
       prender(LOW,LOW,LOW,HIGH,LOW,HIGH,LOW);
      estado=4;
      }
       else if(estado==4){
       prender(HIGH,LOW,LOW,HIGH,HIGH,LOW,LOW);
      estado=5;
      }
       else if(estado==5){
       prender(LOW,HIGH,LOW,HIGH,LOW,LOW,LOW);
      estado=6;
      }
       else if(estado==6){
        
       prender(LOW,HIGH,LOW,LOW,LOW,LOW,LOW);
      estado=7;
      } else if(estado==7){
       prender(LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH);
      estado=8;
      }
       else if(estado==8){
       prender(LOW,LOW,LOW,LOW,LOW,LOW,LOW);
      estado=9;
      }
       else if(estado==9){
       prender(LOW,LOW,LOW,HIGH,HIGH,LOW,LOW);
      estado=0;
      }
      delay(2000);

     
      
    }
/*
  // put your main code here, to run repeatedly:
  cero();
  uno();
  dos();
  tres();
  cuatro();
  cinco();
  seis();
  siete();
  ocho();
  nueve();
  cero();
  nueve();
  ocho();
  siete();
  seis();
  cinco();
  cuatro();
  tres();
  dos();
  uno();
  
*/

}
void prender(int a1,int a2,int a3,int a4,int a5,int a6,int a7){
   digitalWrite(a,a1);
  digitalWrite(b,a2);
  digitalWrite(c,a3);
  digitalWrite(d,a4);
  digitalWrite(e,a5);
  digitalWrite(f,a6);
  digitalWrite(g,a7);
  }
/*void cero(){
   digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
 
  //cero
  }
  void uno(){
     digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  //uno
  }
  void dos(){
    digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);

  //dos
  }
  void tres(){
      digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);

  //tres
  }
  void cuatro(){
     digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

   
  //cuatro
  }
  void cinco(){
    digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

  //cinco
  }
  
  void seis(){
     digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

  //seis
  }
  void siete(){
     digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);

  //siete
  }
  void ocho(){
     digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
 
  //ocho
  }
  void nueve(){
     digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
 
  //nueve
  }*/
  
