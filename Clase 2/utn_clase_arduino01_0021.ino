// Codigo Ejemplo
int Led_Pin_verde = 11;
int Led_Pin_amarillo = 12;
int Led_Pin_rojo = 13;

void setup()
{
  // Configurar Pin como Salida
  pinMode(Led_Pin_verde, OUTPUT);
  pinMode(Led_Pin_amarillo, OUTPUT);
  pinMode(Led_Pin_rojo, OUTPUT);
}

void loop()
{
  // Encender Led verde
  digitalWrite(Led_Pin_verde, HIGH);
  // Esperar 6 Segundos
  delay(6000);
  // Apagar Led verde
  digitalWrite(Led_Pin_verde, LOW);
  // Encender led amarillo
  digitalWrite(Led_Pin_amarillo, HIGH);
  // Esperar 2 Segundos
  delay(2000);
  // Apagar Led amarillo
  digitalWrite(Led_Pin_amarillo, LOW);
  // Encender Led rojo
  digitalWrite(Led_Pin_rojo, HIGH);
  // Esperar 8 Segundos
  delay(8000);
  // Apagar Led rojo
  digitalWrite(Led_Pin_rojo, LOW);
  // Encender led amarillo
  digitalWrite(Led_Pin_amarillo, HIGH);
  // Esperar 2 Segundos
  delay(2000);
  // Apagar Led amarillo
  digitalWrite(Led_Pin_amarillo, LOW);
  
  }