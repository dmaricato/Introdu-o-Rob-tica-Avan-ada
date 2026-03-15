// motor esquerdo
int velMotorEsq = 3; // D3 PWM
int motorEsqFrente = 5; // D5
int motorEsqTras = 6; // D6

// motor direito
int velMotorDir = 11; // D11 PWM
int motorDirFrente = 9; // D9
int motorDirTras = 10; // D10

void setup() {

  pinMode(motorEsqFrente, OUTPUT);
  pinMode(motorEsqTras, OUTPUT);
  pinMode(motorDirFrente, OUTPUT);
  pinMode(motorDirTras, OUTPUT);
  pinMode(velMotorEsq, OUTPUT);
  pinMode(velMotorDir, OUTPUT);

}

void loop() {

  unsigned long tempoAtual = millis();

  if (tempoAtual < 5000) {

    digitalWrite(motorEsqFrente, HIGH);
    digitalWrite(motorEsqTras, LOW);

    digitalWrite(motorDirFrente, HIGH);
    digitalWrite(motorDirTras, LOW);

    analogWrite(velMotorEsq, 100);
    analogWrite(velMotorDir, 100);

  } else if (tempoAtual < 7000) {

    analogWrite(velMotorEsq, 0);
    analogWrite(velMotorDir, 0);

  } else if (tempoAtual < 10000) {

    digitalWrite(motorEsqFrente, LOW);
    digitalWrite(motorEsqTras, HIGH);

    digitalWrite(motorDirFrente, LOW);
    digitalWrite(motorDirTras, HIGH);

    analogWrite(velMotorEsq, 220);
    analogWrite(velMotorDir, 220);

  } else {

    analogWrite(velMotorEsq, 0);
    analogWrite(velMotorDir, 0);
  }
}