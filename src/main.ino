const int LED = 25;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String linia = Serial.readStringUntil('\n');
    linia.trim();

    if (linia == "ON") {				//Si el monitor mostra ON engega el LED
      digitalWrite(LED, HIGH);
      Serial.println("LED ENCÈS");
    }
    else if (linia == "OFF") {			//Si el monitor mostra OFF apaga el LED
      digitalWrite(LED, LOW);
      Serial.println("LED APAGAT");
    }
    else {
      Serial.println("Ordre desconeguda"); 	//Si la ordre en el monitor no es ON o OFF mostra el text indicat
    }
  }
}
