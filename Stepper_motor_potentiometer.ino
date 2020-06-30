/*
 * --------------------------------------------------------------------------------------------------------------------
 * Logenstsyms Youtube сувагт нэгдсэнд баярлалаа. 
 * Subscribe дархаа бүү мартаарай.
 * 
 *                    Хүндэтгэсэн: П.Жавхлантөгс
 *                             Танд амжилт хүсье.
 * --------------> Алхамт моторын туршилт <-------------------------
 * 
 * 
 */
 
const int Alham = 3; 
const int Chiglel = 4; 

int shiljihutga,utga;
 
void setup() {
  pinMode(Alham,OUTPUT); 
  pinMode(Chiglel,OUTPUT);
  digitalWrite(Chiglel,LOW); 
}

void loop() {
  
  utga = Hurd(); 
  digitalWrite(Alham, HIGH);
  delayMicroseconds(utga);
  digitalWrite(Alham, LOW);
  delayMicroseconds(utga);
  
}

int Hurd() {
  int shiljihutga = analogRead(A0); 
  int shiljuulsen = map(shiljihutga, 0, 1023, 500,4000); 
  return shiljuulsen;  

}
