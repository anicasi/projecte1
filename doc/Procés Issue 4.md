OBJECTIU: Controlar LED amb les ordres textuals ON i OFF per engegar i apagar el LED respectivament

Per complir aquesta tasca utilitzarem els codis dels issues anteiors, afegit una variable que identificara a quin port esta el LED y el filtre de que UNICAMENT funcioni si el terminal llegeix ON o OFF

const int LED = 8;  //<- Aixo detecta que el Led esta posat a D03

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String linia = Serial.readStringUntil('\n');
    linia.trim();

    if (linia == "ON") {				//<- Amb aquest filtre, si el monitor mostra ON engega el LED
      digitalWrite(LED, HIGH);
      Serial.println("LED ENCÈS");
    }
    else if (linia == "OFF") {		//	<- Si el monitor mostra OFF apaga el LED
      digitalWrite(LED, LOW);
      Serial.println("LED APAGAT");
    }
    else {
      Serial.println("Ordre desconeguda"); //	<- Aixo fa que si la ordre en el monitor No es ON o OFF mostra el text indicat i no fa res
    }
  }
}



<img width="1169" height="230" alt="image" src="https://github.com/user-attachments/assets/9cb96beb-5a7d-4559-96db-5ba5e58c8e76" />
