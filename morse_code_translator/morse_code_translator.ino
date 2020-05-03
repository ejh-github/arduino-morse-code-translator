String message = "";	/* This is the message to be translated to Morse code. */
char current_character;	/* This is the current (during message iteration) character being translated. */
int time_unit = 50;	/* This is the time unit, 50ms, and probably needs to be tweaked. */


/* Morse dot or 'dit' */
void dit() {
	Serial.print(".");
	digitalWrite(13, HIGH);
	digitalWrite(8, HIGH);
	delay(time_unit);
	digitalWrite(13, LOW);
	digitalWrite(8, LOW);
	delay(time_unit);
}


/* Morse dash or 'dah */
void dah() {
	Serial.print("-");
	digitalWrite(13, HIGH);
	digitalWrite(8, HIGH);
	delay(time_unit * 3);
	digitalWrite(13, LOW);
	digitalWrite(8, LOW);
	delay(time_unit);
}


/* This translates each character into it's Morse equivalent. */
void morse() {
	switch(current_character) {
		case 'A':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'B':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'C':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'D':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'E':
			dit();
			delay(time_unit);
			break;
		case 'F':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'G':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'H':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'I':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'J':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'K':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'L':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'M':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'N':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'O':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'P':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			break;
		case 'Q':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'R':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'S':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case 'T':
			dah();
			delay(time_unit);
			break;
		case 'U':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'V':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'W':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'X':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'Y':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case 'Z':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case '0':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case '1':
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case '2':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;		
		case '3':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case '4':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dah();
			delay(time_unit);
			break;
		case '5':
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;

		case '6':
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case '7':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case '8':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case '9':
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dah();
			delay(time_unit);
			dit();
			delay(time_unit);
			break;
		case '\n':
			break;
		case '\0':
			break;
		case ' ':
			delay(time_unit * 7);
			Serial.print(" / ");
	}
}


/* This iterates through the provided message character by character and sends that character to Morse() to be translated. */
void translate() {
  message.toUpperCase(); /* Morse is non case sensitive. */
	for (int i = 0; i < message.length(); i++) {
		current_character = message.charAt(i);
		morse();
	}
}


void setup() {
	Serial.begin(9600);
	pinMode(13, OUTPUT);
	pinMode(8, OUTPUT);
}


void loop() {
	while (Serial.available()) {
		message = Serial.readString();
		Serial.print("\n" + message);
		translate();
		Serial.print("\n");
	}
}
