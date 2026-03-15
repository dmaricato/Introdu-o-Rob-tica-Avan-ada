// motor esquerdo
int velMotorEsq = 3; // D3 PWM
int motorEsqFrente = 5; // D5
int motorEsqTras = 6; // D6

// motor direito
int velMotorDir = 11; // D11 PWM
int motorDirFrente = 9; // D9
int motorDirTras = 10; // D10

// sensor ultrassonico
int disparoSensor = 7; // D7
int echoSensor = 8; // D8

long tempoRe = 0;
bool objetoDetectado = false;

long medirDistancia() {

  digitalWrite(disparoSensor, LOW);
  delayMicroseconds(2);

  digitalWrite(disparoSensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(disparoSensor, LOW);

  long duracao = pulseIn(echoSensor, HIGH);

  long distancia = duracao * 0.034 / 2;
  // 0.034 = vel. do som em cm/microsegundo

  return distancia;
}

void setup() {

  pinMode(motorEsqFrente, OUTPUT);
  pinMode(motorEsqTras, OUTPUT);
  pinMode(motorDirFrente, OUTPUT);
  pinMode(motorDirTras, OUTPUT);
  pinMode(velMotorEsq, OUTPUT);
  pinMode(velMotorDir, OUTPUT);
  pinMode(disparoSensor, OUTPUT);
  pinMode(echoSensor, INPUT);

}

void loop() {

  long distancia = medirDistancia();

  if (objetoDetectado == false) {

    digitalWrite(motorEsqFrente, HIGH);
    digitalWrite(motorEsqTras, LOW);

    digitalWrite(motorDirFrente, HIGH);
    digitalWrite(motorDirTras, LOW);

    analogWrite(velMotorEsq, 150);
    analogWrite(velMotorDir, 150);

    if (distancia < 10) {

      objetoDetectado = true;
      tempoRe = millis();
    }
  } else {

    long tempoCorrido = millis();

    if (tempoCorrido - tempoRe < 10000) {

      int velocidade = map(tempoCorrido - tempoRe, 0, 10000, 200, 50);

      digitalWrite(motorEsqFrente, LOW);
      digitalWrite(motorEsqTras, HIGH);

      digitalWrite(motorDirFrente, LOW);
      digitalWrite(motorDirTras, HIGH);

      analogWrite(velMotorEsq, velocidade);
      analogWrite(velMotorDir, velocidade);
    } else {

      analogWrite(velMotorEsq, 0);
      analogWrite(velMotorDir, 0);
    }
  }
}