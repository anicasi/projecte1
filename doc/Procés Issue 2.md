OBJECTIU: Llegir línia des del Monitor Sèrie 🖥️

Aquest issue es completa mediant la reutilització del codi empleat al Issue 1 Ja que per comprovar que el monitor sèrie reconeixia el text completant l'Issue 2 gracies a la linia:

void setup (){
  Serial.begin(115200);
  Serial.println("Tot esta llest");
  }
void loop(){
  if (Serial.available()){
    String linia = Serial.readStringUntil('\n');
    linia.trim();
  if (linia.length()>0){ 
    Serial.println(linia);
  }
}
}


I de la mateixa manera amb la comprovació afegida al Procés de l'issue 1 mostrant el funcionament del codi mostrat



<img width="313" height="165" alt="image" src="https://github.com/user-attachments/assets/cdca5fc4-6d3b-40f9-bfa3-5f35f3e5334d" />
