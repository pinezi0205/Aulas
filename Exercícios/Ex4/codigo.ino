const int ledPin = 2; 
const int Botao = 3; 
int estadoBotao; 

void setup(){
    pinMode(ledPin, OUTPUT); 
    pinMode(Botao, INPUT); 
}

void loop(){
    estadoBotao = digitalRead(Botao); 

    if (estadoBotao == HIGH){ 
        Piscaled();
    }
    else{ 
        digitalWrite(ledPin, LOW);
    } 
}
void Piscaled ()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
}
