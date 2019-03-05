// identifikasi pin
const int pinSns = 7;
const int pinBuzzer = 8;
int data;

void setup() {
  // tentukan input output
pinMode(pinSns, INPUT);
pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  // hasil sensor
data = digitalRead(pinSns);
// jika data HIGH berarti gas tidak terdeteksi
if (data == HIGH) {
  // buzzer tidak berbunyi
  digitalWrite(pinBuzzer, LOW);
}
// jika data LOW berarti gas terdeteksi
else if (data == LOW) {
  // buzzer berbunyi
  digitalWrite(pinBuzzer, HIGH);
}
}
