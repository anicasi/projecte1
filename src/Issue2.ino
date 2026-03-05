void setup (){
Serial.begin(115200);
Serial.println("Tot esta llest");
}
void loop(){
if (Serial.available()){
String linia = Serial.readStringUntil('\n'); //Llegeix els caràcters dins de ('/n')
linia.trim();
if (linia.length()>0){
Serial.println(linia); //Mostra la línia que s'ha escrit en el monitor sèrie
}
}
}
