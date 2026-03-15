# Introdu-o-Rob-tica-Avan-ada
Modelagem 3D no Fusion e programações para ingresso na Robótica Avançada.

Tarefas:

MODELAGEM 3D
Desenvolver e montar no Fusion um robô seguidor de linha que seja possível de existir e funcionar no mundo físico, ou seja, ele deve ser capaz de ler uma fita isolante no chão e detectar quando há um objeto na sua frente. O robô deve ter todos os componentes necessários para funcionar, considerando mecânica e eletrônica (exceto fios e resistores) e ele deve estar inteiro montado no Fusion utilizando a ferramenta Joint:

- Sugestão sensor para seguir linha: LDR;
- Usar 2 motores amarelos;
- Sensor ultrassônico HC-SR04;
- Ponte H L298n;
- Bateria 9V;
- Arduino Uno ou Nano.

IMPORTANTE: se um determinado componente precisar de parafusos para estar fixo, eles devem estar presentes na montagem, não deverá ser utilizada "cola" no projeto.


PROGRAMAÇÃO
Considerando o robô teórico do exercício anterior, apresentar no Arduino IDE três programações que fariam o robô executar os seguintes movimentos:

 1) Andar lentamente para frente por 5 segundos, após, o robô para por 2 segundos e depois anda rapidamente para trás por 3 segundos.

2) O robô faz uma curva durante 5 segundos rotacionando sobre o próprio eixo.

3) O robô começa andando para frente com velocidade média, para quando o ultrassônico detectar um objeto na sua frente (distância menor que 10 cm). 
Na sequência o robô dá ré desacelerando durante 10 segundos. 
IMPORTANTE: obrigatório utilizar "millis()" nesta programação.

Observação: Informar via comentário nas 3 programações em quais portas do Arduino os motores e sensores estariam ligados.
