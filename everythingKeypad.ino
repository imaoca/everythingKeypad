int val0,val1,val2,val3 = 0;        // value read from the pot

void setup() {
  // initialize serial communications at 9600 bps:
    Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  val0 = analogRead(A0);
  val1 = analogRead(A1);
  val2 = analogRead(A2);
  val3 = analogRead(A3);
  
if (val0>200) Keyboard.print('a');
if (val1>200) Keyboard.print('b');
if (val2>200) Keyboard.print('c');
if (val3>200) Keyboard.print('d');
  Serial.print(val0);
  Serial.print(' ');
  Serial.print(val1);
  Serial.print(' ');
  Serial.print(val2);
  Serial.print(' ');
  Serial.println(val3);
  delay(10);
}
