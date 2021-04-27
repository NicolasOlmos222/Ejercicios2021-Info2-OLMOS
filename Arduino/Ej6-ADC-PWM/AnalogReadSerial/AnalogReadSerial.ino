/*j6-ADC-PWM: Realizar la medición de un sensor conectado al ADC y producir una variación
 * proporcional en la salida PWM. Ejemplos:
 * Potenciómetro que regule el brillo de un LED, la velocidad de un motor o ventilador.
 * LDR que regule el brillo de un LED.
 * Sensor de temperatura que regules la velocidad de un ventilador.
 */
 #define POTE_PIN 3
 #define LED_PIN A0
 
void setup() {
  Serial.begin(9600);
  pinMode(POTE_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, analogRead(POTE_PIN)/4);  //El valor resultante sera entre 0 y 255.
}
