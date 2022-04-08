int inpin=A0;
int outpin=13;
int val;
int temp;
int cond=25;
void setup() {
pinMode(inpin, INPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
val=analogRead(inpin);
temp=((val/0.204)-500)/10;
  if (temp>cond){
    digitalWrite(outpin, HIGH);}
  delay(5000);
  digitalWrite(outpin, LOW);
  Serial.println(temp);
}
