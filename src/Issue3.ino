void setup (){
Serial.begin(115200);
Serial.println("Tot esta llest");
}
void setup (){
Serial.begin(115200);
}
void loop(){
if (Serial.available()){
String linia = Serial.readStringUntil('\n');
linia.trim();
if (linia.length()>0){
Serial.print("Rebut: ");
Serial.println(linia);
}
}
}
