## 3.1 Código

<p align="center">
  <img src="https://github.com/GiganteDev/Arduino/blob/main/.github/img-arduino-logo.png" width="120">
</p>

```cpp
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
```

Em uma rápida interpretação, este código fará com que o LED vermelho entre em estado HIGH, estado o qual libera tensão para o pino e consecutivamente ascende o LED, espere 1 segundo (1000 milissegundo) e muda o estado do pino para LOW onde o envio de tensão é interrompido e o LED se apaga, espera mais 1 segundo e repete com os LEDs verde e amarelo e através da função loop reinicia o sistema de forma interrupta.

---

<a  href="https://github.com/GiganteDev/Arduino/"><img  src="https://img.shields.io/badge/%E2%9E%94%20-Projetos-fff"/></a>