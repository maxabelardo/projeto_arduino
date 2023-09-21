// Valor do led Vermelho
    const int ledVermelho = 12;

// Valor do led Amarelo
    const int ledAmarelo  = 7;

// Valor do led Verde    
    const int ledVerde    = 3;

void setup() {
// Define a porta que será usada pela variaveis.
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVerde, OUTPUT);

}

void loop() {
  
// Comando que vai ACENDER o led.
    digitalWrite(ledVermelho, HIGH);
// Comando de pausa.
    delay(300);
// Comando que vai PAGAR o led.
    digitalWrite(ledVermelho, LOW);

// Comando que vai ACENDER o led.
    digitalWrite(ledAmarelo, HIGH);
// Comando de pausa.
    delay(300);
// Comando que vai PAGAR o led.
    digitalWrite(ledAmarelo, LOW);

// Comando que vai ACENDER o led.
    digitalWrite(ledVerde, HIGH);
// Comando de pausa.
    delay(300);
// Comando que vai PAGAR o led.
    digitalWrite(ledVerde, LOW);

}
