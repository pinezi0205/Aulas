const int led = 2;
const int botao = 3;
int botaoEstado = 0;

void setup ()
{
  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);
}

void loop ()
{
  botaoEstado = digitalRead(botao);
  if (botaoEstado == HIGH) {
  digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
