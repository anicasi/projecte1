OBJECTIU: Mostrar dades rebudes amb el prefix "Rebut: ..." per comprovar el funcionament de la comunicació

Per completar aquest Issue, partirem del codi utilitzat als Issues 1 i 2 ja que mostra el text escrit en el monitor sèrie cosa que completa la segona part de la tasca:

void setup (){
  Serial.begin(115200);
  delay(200);
  Serial.println("Tot esta llest");
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
<img width="393" height="389" alt="image" src="https://github.com/user-attachments/assets/c7f254ad-0612-4602-9604-36a6962f930c" />
