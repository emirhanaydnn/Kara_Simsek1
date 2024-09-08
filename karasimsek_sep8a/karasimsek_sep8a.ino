int Ledler[]= {2,3,4,5,6,7};
void setup() {
  for(int i=0;i<=6;i++)
  {
   pinMode(Ledler[i],OUTPUT);
  }

}

void loop() {
  for(int i=0;i<=6;i++)
  {
    digitalWrite(Ledler[i], HIGH);
    delay(100);
    digitalWrite(Ledler[i], LOW);
    delay(100);
  }
for(int j=6;j>=0;j--)
{
  digitalWrite(Ledler[j], HIGH);
    delay(100);
    digitalWrite(Ledler[j], LOW);
    delay(100);
  }
}

