OBJECTIU: Crear el setup() inicial i inicialitzar Serial a 115200 baud. Enviar un missatge inicial al monitor sèrie indicant que tot està llest

Per fer aixo es necessita la base inicial:
void setup() {
}

void loop() {
}

I també el codi que inicialitza el Serial a 115200:
void setup (){
  Serial.begin(115200);
  delay(200);
  Serial.println("Tot esta llest");
  }
void loop(){
 
}


D'aquesta manera mostrara en el text la linia escrita:


<img width="601" height="450" alt="image" src="https://github.com/user-attachments/assets/296735b5-5690-405b-835d-44f7b3970f5b" />
