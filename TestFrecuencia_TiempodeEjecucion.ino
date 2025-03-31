
/* Este programa se enmarca en el TP1, de la materia Sistemas de Computacion, en el cual
 * trabajamos los conceptos de rendimiento y benchmark. El siguiente codigo genera, para
 * un cristal de 16MHz, un conteo de aproximadamente 10 segundos. El objetivo es observar
 * como, cuando cambiamos el oscilador por uno de otra frecuencia, 8MHz en segunda instancia,
 * como varia el tiempo de ejecucion.
*/

void setup() {
  Serial.begin(9600); // Iniciar la comunicacion serial
  while (!Serial);    // Esperar a que el puerto serial esté listo
}

void loop() {
  for (int i = 0; i <= 10; i++) { // Bucle que cuenta de 0 a 10
    Serial.print("Segundo ");
    Serial.println(i);
    
    retardoSegundo();  // Llama a la función que crea un retardo de 1 segundo
  }

  retardoSegundo();  
  retardoSegundo();// Llamamos dos veces a la función que crea un retardo de 1 segundo
}

void retardoSegundo() {
  unsigned long start_time = micros();  // Guarda el tiempo actual en microsegundos
  
  while (micros() - start_time < 1000000) {  
    // Ejecuta un ciclo vacío durante 1 segundo
  }
}
