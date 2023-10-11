void setup() {
	Serial.begin(115200);

	pinMode(11, OUTPUT);
}

void loop() {
	Serial.print(analogRead(A0));
	Serial.print('\t');
	Serial.print(analogRead(A1));
	Serial.print('\t');
	Serial.print(analogRead(A2));
	Serial.print('\t');
	Serial.println(analogRead(A3));

	digitalWrite(11, !digitalRead(11));
}
