int Ventilador1 = 0;
int Ventilador2 = 1;
int BotonVentilador1 = 4;
int BotonVentilador2 = 3;
int EstadoBotonVentilador1;
int EstadoBotonVentilador2;

void setup()
{
  pinMode(Ventilador1, OUTPUT);
  pinMode(Ventilador2, OUTPUT);
  pinMode(BotonVentilador1, INPUT_PULLUP);
  pinMode(BotonVentilador2, INPUT_PULLUP);
}

void loop()
{
  EstadoBotonVentilador1 = digitalRead(BotonVentilador1);
  if (EstadoBotonVentilador1 == LOW)
  {
    digitalWrite(Ventilador1, HIGH);
    for (int i=0; i <=255; i++)
    {
      analogWrite(Ventilador1, i);
      delay(25);
    }
    delay(15000);
    analogWrite(Ventilador1, LOW);
  }

  EstadoBotonVentilador2 = digitalRead(BotonVentilador2);
  if (EstadoBotonVentilador2 == LOW)
  {
    for (int i=0; i <=255; i++)
    {
      analogWrite(Ventilador2, i);
      delay(25);
    }
    delay(15000);
    analogWrite(Ventilador2, LOW);
  }
}
