OBJECTIU: Mostrar dades rebudes amb el prefix "Rebut: ..." per comprovar el funcionament de la comunicació

Per completar aquest Issue, partirem del codi utilitzat als Issues 1 i 2 ja que mostra el text escrit en el monitor sèrie cosa que completa la segona part de la tasca:

void loop() {
 if (Serial.available()){
 
    String linia = Serial.readStringUntil('\n');
    linia.trim();
  if (linia.length()>0){ 
  
    Serial.println(linia);
  }
  }
}

El que resta, és que indiqui el text de "Rebut:" i per completar aixó, hem de repetir una linia més dins de **void loop(){**, aquesta és Serial.printIn(); sobre el pintIn(linia)

void loop() {
 if (Serial.available()){
 
    String linia = Serial.readStringUntil('\n');
    linia.trim();
  if (linia.length()>0){ 
  
    Serial.printIn(Rebut: );
    Serial.println(linia);
  }
  }
}
