int l;
int o;
int r;
int t=300;
void setup()
{
  for (l=9;l<=11;l++)
  for (o=9;o<=11;o++)
  for (r=3;r<=5;r++)
{
pinMode (l,OUTPUT);
pinMode (o,OUTPUT);
pinMode (r,OUTPUT);
}
}
void loop()
{
  
  analogWrite (A0,0);
  analogWrite (A1,0);
  analogWrite (A2,255);
  delay(t);
  analogWrite (A0,0);
  analogWrite (A1,0);
  analogWrite (A2,0);



  digitalWrite (11,0);
  digitalWrite (10,255);
  digitalWrite (9,255);
  delay(t);
  digitalWrite (11,0);
  digitalWrite (10,0);
  digitalWrite (9,0);


  analogWrite (A3,0);
  analogWrite (A4,255);
  analogWrite (A5,255);
  delay(t);
  analogWrite (A3,0);
  analogWrite (A4,0);
  analogWrite (A5,0);

  delay(t);

}
