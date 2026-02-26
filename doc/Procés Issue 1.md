OBJECTIU: Crear el setup() inicial i inicialitzar Serial a 115200 baud. Enviar un missatge inicial al monitor sèrie indicant que tot està llest

Per fer aixo es necessita la base inicial:
void setup() {
}

void loop() {
}

I també el codi que inicialitza el Serial a 115200:
void setup() {
  Serial.begin(115200);
}


Per confirmar que el monitor sèrie reconeix el text, s'afegeix les següents linies dins void loop():

void loop() {
 if (Serial.available()){
 
    String linia = Serial.readStringUntil('\n');
    linia.trim();
  if (linia.length()>0){ 
  
    Serial.println(linia);
  }
}
}

D'aquesta manera mostrara en el text la linia escrita:



<img width="313" height="165" alt="image" src="https://github.com/user-attachments/assets/cdca5fc4-6d3b-40f9-bfa3-5f35f3e5334d" />
