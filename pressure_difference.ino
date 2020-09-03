int vc = 2000;
int po = 101325;
float stk = 5.2;
float t;
double pd,piv,pivp,pivn,pc,vo;


void setup() {
  Serial.begin(9600);
  Serial.println("Pressure sensor r");
}

void loop() {
  pivp = analogRead(A0);
  pivn = analogRead(A1);
  piv = pivp - pivn;
  pd = ((piv/2046)*1000) - 2;
  Serial.print(pd);
  Serial.println();
  delay(200);
}
