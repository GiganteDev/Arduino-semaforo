void  setup() { // Executado cada vez que o Arduino se inicializa;
    pinMode(1, OUTPUT); // Inicializa o pino 1 como saída.
    pinMode(4, OUTPUT); // Inicializa o pino 4 como saída.
    pinMode(7, OUTPUT); // Inicializa o pino 7 como saída.
}

void  loop() { // Função loop() executada interruptamente;
    // Liga o LED vermelho
    digitalWrite(7, HIGH); // Acende o LED (HIGH nível de tensão liberado);
    delay(1000); // Espera um segundo;
    digitalWrite(7, LOW); // Apaga o LED (LOW nível de tensão interrompido);
  
    // Liga o LED verde
    digitalWrite(1, HIGH); // Acende o LED (HIGH nível de tensão liberado);
    delay(1000); // Espera um segundo;
    digitalWrite(1, LOW); // Apaga o LED (LOW nível de tensão interrompido);
  
    // Liga o LED amarelo
    digitalWrite(4, HIGH); // Acende o LED (HIGH nível de tensão liberado);
    delay(1000); // Espera um segundo;
    digitalWrite(4, LOW); // Apaga o LED (LOW nível de tensão interrompido);
}
