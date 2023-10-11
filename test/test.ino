void setup() {
	Serial.begin(115200);

	pinMode(11, OUTPUT);
}

unsigned long t = 0;

void loop() {
	Serial.print(analogRead(A0));
	Serial.print('\t');
	Serial.print(analogRead(A1));
	Serial.print('\t');
	Serial.print(analogRead(A2));
	Serial.print('\t');
	Serial.println(analogRead(A3));

	unsigned long now = millis();

	if (now - t >= 100) {
		t = now;

		tone(11, (rand() % 1000) + 100);
	}
}
