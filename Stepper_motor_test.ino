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
const int Alham = 3; //Мотор драйверын алхам тоолох хөлыг ардуйногийн 3-р хол дээр холбох (PWM хөл дээр)
const int Chiglel = 4; // Моторын чиглэлийг удирдах хөлыг ардуйногийн 4-р хол дээр холбох (дурын)
int hugtsaa = 1000; // hugtsaa гэсэн хувьсагчид утга хадгалах.
 
void setup() {
  pinMode(Alham,OUTPUT);   // Alham-г гаралт болгон зарлах.
  pinMode(Chiglel,OUTPUT); // Chiglel-г гаралт болгон зарлах.
}
void loop() {
  digitalWrite(Chiglel,HIGH); // digitalWrite функцийн тусламжтай моторын чиглэл удирдах хаягт 1 гэсэн утга оноох

  for(int x = 0; x < 400; x++) { // x-гэсэн хувьсагч зарлаад анхны утга 0-ыг 200 хүртэл өсгөх.
    digitalWrite(Alham,HIGH); // digitalWrite функцийн тусламжтай моторын алхам удирдах хаягт 1 гэсэн утга оноох
    delayMicroseconds(hugtsaa); // delayMicroseconds функцийн тусламжтай саатах хугцааг hugtsaa гэсэн хаяг байгаа утгаар саатуулах.
    digitalWrite(Alham,LOW); // digitalWrite функцийн тусламжтай моторын алхам удирдах хаягт 0 гэсэн утга оноох
    delayMicroseconds(hugtsaa); // delayMicroseconds функцийн тусламжтай саатах хугцааг hugtsaa гэсэн хаяг байгаа утгаар саатуулах.
  }
  delay(1000); // delay функцийн тусламжтай 1 секундээр саатуулах.
  
  digitalWrite(Chiglel,LOW); // digitalWrite функцийн тусламжтай моторын чиглэл удирдах хаягт 0 гэсэн утга оноох
  
  for(int x = 0; x < 400; x++) { // x-гэсэн хувьсагч зарлаад анхны утга 0-ыг 200 хүртэл өсгөх.
    digitalWrite(Alham,HIGH); // digitalWrite функцийн тусламжтай моторын алхам удирдах хаягт 1 гэсэн утга оноох
    delayMicroseconds(hugtsaa); // delayMicroseconds функцийн тусламжтай саатах хугцааг hugtsaa гэсэн хаяг байгаа утгаар саатуулах.
    digitalWrite(Alham,LOW); // digitalWrite функцийн тусламжтай моторын алхам удирдах хаягт 0 гэсэн утга оноох
    delayMicroseconds(hugtsaa); // delayMicroseconds функцийн тусламжтай саатах хугцааг hugtsaa гэсэн хаяг байгаа утгаар саатуулах.
  }
  delay(1000); // delay функцийн тусламжтай 1 секундээр саатуулах.
}
