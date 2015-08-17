int pin=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  punto();punto();punto();//s
  delay(300);//separar punto y raya
  raya();raya();raya();//o
  punto();punto();punto();//s
  delay(1000);
  punto();raya();raya();punto();//P
  delay(300);
  punto();//E
  delay(300);
  raya();punto();punto();//D
  delay(300);
  punto();raya();punto();//R
  delay(300);
  raya();raya();raya();//O
  
  delay(2000);
  
  
  

}
void punto(){
 digitalWrite(pin,HIGH);
  delay(200);
  digitalWrite(pin,LOW);
  delay(200);  
}

void raya(){
   digitalWrite(pin,HIGH);
  delay(500);
  digitalWrite(pin,LOW);
  delay(500);
}
