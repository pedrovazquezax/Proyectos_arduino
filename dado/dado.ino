int leds[7]={2, 3, 4, 5, 6,7,8};
int patronesDado[7][7]={
  {0,0,0,0,0,0,1},//1
  {0,0,1,0,0,1,0}, //2
  {0,0,1,0,0,1,1},//3
  {1,0,1,1,0,1,0},//4
  {1,0,1,1,0,1,1},//5
  {1,1,1,1,1,1,0},//6
  {0,0,0,0,0,0,0}//7
  };
  int cambiapin=9;
  int blanco=6;
  
void setup() {
 
 for (int i=0;i<7;i++){
 pinMode(leds[i],OUTPUT);
 digitalWrite(leds[i],LOW);
 }
 randomSeed(analogRead(0));
 pinMode(cambiapin,INPUT);
}

void loop() {

  if(digitalRead(cambiapin)){
    tiraDado();
    }
    delay(100);

}
void tiraDado(){
  int resultado=0;
  int lengthOfRoll=random(15,25);

  for(int i=0;i<lengthOfRoll;i++){
    resultado=random(0,6);
    muestra (resultado) ;
    delay(50+i*10);
    }
  for (int j=0;j<3;j++){
    muestra(blanco);
    delay(500);
    muestra(resultado);
    }
}

void muestra(int resultado){
  for(int i=0;i<7;i++){
    digitalWrite(leds[i],patronesDado[resultado][i]);
    }
  }




