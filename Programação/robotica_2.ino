// motor esquerdo
int velMotorEsq = 3; // D3 PWM
int motorEsqFrente = 5; // D5
int motorEsqTras = 6; // D6

// motor direito
int velMotorDir = 11; // D11 PWM
int motorDirFrente = 9; // D9
int motorDirTras = 10; // D10

unsigned long tempoInicio;

void setup() {

  pinMode(motorEsqFrente, OUTPUT);
  pinMode(motorEsqTras, OUTPUT);
  pinMode(motorDirFrente, OUTPUT);
  pinMode(motorDirTras, OUTPUT);
  pinMode(velMotorEsq, OUTPUT);
  pinMode(velMotorDir, OUTPUT);

  tempoInicio = millis();
}

void loop() {

  if (millis() - tempoInicio < 5000) {

    // motor esquerdo frente
    digitalWrite(motorEsqFrente, HIGH);
    digitalWrite(motorEsqTras, LOW);

    // motor direito trás
    digitalWrite(motorDirFrente, LOW);
    digitalWrite(motorDirTras, HIGH);

    analogWrite(velMotorEsq, 180);
    analogWrite(velMotorDir, 180);

  } else {

      analogWrite(velMotorEsq, 0);
      analogWrite(velMotorDir, 0);
  }
}