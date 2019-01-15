void setup() {
   Serial.begin(115200);
}

void loop() {
  //                     Add a voltage divider to the ADC input channel R1 is typically 100K and R2 calculated to achieved 3.3v output as the input to the ADC
  //                     analogRead(ADC pin) / ADC resolution * Voltage Range * Required Value of R2 / Preferred Value of R2
  //                     In this example the input voltage for measurement is 15v
  //                     15v----100K+--to ADC Input GPIO36
  //                                |
  //                               27K
  //                                |
  //                               Gnd
  float voltage = (float)analogRead(36) / 4096 * 15 * 28205 / 27000;
  Serial.print(voltage,1);
  Serial.println("v");
  delay(200);
}
