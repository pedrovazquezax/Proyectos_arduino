int pin=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    punto();raya();//a
  delay(1000);
    raya();punto();punto();punto();//b
  delay(1000);
    raya();punto();raya();punto();//c
  delay(1000);
    raya();punto();punto();//d
  delay(1000);
    punto();//e
  delay(1000);
    punto();punto();raya();punto();//f
  delay(1000);
    raya();raya();punto();//g
  delay(1000);
    punto();punto();punto();punto();//h
  delay(1000);
   punto();punto(); //i
  delay(1000);
    punto();raya();raya();raya();//j
  delay(1000);
    raya();punto();raya;//k
  delay(1000);
    punto();raya();punto();punto();//l
  delay(1000);
    raya();raya();//m
  delay(1000);
    raya();punto();//n
  delay(1000);
    raya();raya();raya();//o
  delay(1000);
    punto();raya();raya();punto();//p
  delay(1000);
    raya();raya();punto();raya();//q
  delay(1000);
    punto();raya();punto();//r
  delay(1000);
    punto();punto();punto();//s
  delay(1000);
    raya();//t
  delay(1000);
    punto();punto();raya();//u
  delay(1000);
   punto();punto();punto();raya(); //v
  delay(1000);
    punto();raya();raya();//w
  delay(1000);  
    raya();punto();punto();raya();//x
  delay(1000);
    raya();punto();raya();raya();//y
  delay(1000);
    raya();raya();punto();punto();//z
  delay(1000);
  
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
