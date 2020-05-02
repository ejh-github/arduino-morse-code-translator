String message = "";	/* This is the message to be translated to Morse code. */
char current_character;	/* This is the current (during message iteration) character being translated. */
int time_unit = 50;	/* This is the time unit, 50ms, and probably needs to be tweaked. */


/* Morse "." */
void dit() {
	Serial.print(".");
	digitalWrite(13, HIGH);
	digitalWrite(8, HIGH);
	delay(time_unit);
	digitalWrite(13, LOW);
	digitalWrite(8, LOW);
	delay(time_unit);
}


/* Morse "-" */
void dah() {
	Serial.print("-");
	digitalWrite(13, HIGH);
	digitalWrite(8, HIGH);
	delay(time_unit * 3);
	digitalWrite(13, LOW);
	digitalWrite(8, LOW);
	delay(time_unit);
}


/* Functional representation of each english letter and number in Morse code. A-Z 0-9 */
void A() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void B() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void C() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void D() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void E() {
	dit();
	delay(time_unit);
}


void F_() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void G() {
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void H() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void I() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void J() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void K() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void L() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void M() {
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void N() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void O() {
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void P() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
}


void Q() {
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void R() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void S() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void T() {
	dah();
	delay(time_unit);
}


void U() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void V() {
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void W() {
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void X() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void Y() {
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
}


void Z() {
	dah();
	delay(time_unit);
	dah();
	delay(time_unit);
	dit();
	delay(time_unit);
	dit();
	delay(time_unit);
}


void one() {
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
}


void two() {
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
}


void three() {
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
}


void four() {
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
}


void five() {
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
}


void six() {
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
}


void seven() {
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
}


void eight() {
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
}


void nine() {
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
}


void zero() {
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
}


/* This translates each character into Morse equivalent. I'm probably changing this to a switch in the future. */
void morse() {
	if (current_character == 'A' || current_character == 'a') {
		A();
		Serial.print(" ");
	}
	else if (current_character == 'B' || current_character == 'b') {
		B();
		Serial.print(" ");
	}
	else if (current_character == 'C' || current_character == 'c') {
		C();
		Serial.print(" ");
	}
	else if (current_character == 'D' || current_character == 'd') {
		D();
		Serial.print(" ");
	}
	else if (current_character == 'E' || current_character == 'e') {
		E();
		Serial.print(" ");
	}
	else if (current_character == 'f' || current_character == 'f') {
		F_();
		Serial.print(" ");
	}
	else if (current_character == 'G' || current_character == 'g') {
		G();
		Serial.print(" ");
	}
	else if (current_character == 'H' || current_character == 'h') {
		H();
		Serial.print(" ");
	}
	else if (current_character == 'I' || current_character == 'i') {
		I();
		Serial.print(" ");
	}
	else if (current_character == 'J' || current_character == 'j') {
		J();
		Serial.print(" ");
	}
	else if (current_character == 'K' || current_character == 'k') {
		K();
		Serial.print(" ");
	}
	else if (current_character == 'L' || current_character == 'l') {
		L();
		Serial.print(" ");
	}
	else if (current_character == 'M' || current_character == 'm') {
		M();
		Serial.print(" ");
	}
	else if (current_character == 'N' || current_character == 'n') {
		N();
		Serial.print(" ");
	}
	else if (current_character == 'O' || current_character == 'o') {
		O();
		Serial.print(" ");
	}
	else if (current_character == 'P' || current_character == 'p') {
		P();
		Serial.print(" ");
	}
	else if (current_character == 'Q' || current_character == 'q') {
		Q();
		Serial.print(" ");
	}
	else if (current_character == 'R' || current_character == 'r') {
		R();
		Serial.print(" ");
	}
	else if (current_character == 'S' || current_character == 's') {
		S();
		Serial.print(" ");
	}
	else if (current_character == 'T' || current_character == 't') {
		T();
		Serial.print(" ");
	}
	else if (current_character == 'U' || current_character == 'u') {
		U();
		Serial.print(" ");
	}
	else if (current_character == 'V' || current_character == 'v') {
		V();
		Serial.print(" ");
	}
	else if (current_character == 'W' || current_character == 'w') {
		W();
		Serial.print(" ");
	}
	else if (current_character == 'X' || current_character == 'x') {
		X();
		Serial.print(" ");
	}
	else if (current_character == 'Y' || current_character == 'y') {
		Y();
		Serial.print(" ");
	}
	else if (current_character == 'Z' || current_character == 'z') {
		Z();
		Serial.print(" ");
	}
	else if (current_character == '0') {
		zero();
		Serial.print(" ");
	}
	else if (current_character == '1') {
		one();
		Serial.print(" ");
	}
	else if (current_character == '2') {
		two();
		Serial.print(" ");
	}
	else if (current_character == '3') {
		three();
		Serial.print(" ");
	}
	else if (current_character == '4') {
		four();
		Serial.print(" ");
	}
	else if (current_character == '5') {
		five();
		Serial.print(" ");
	}
	else if (current_character == '6') {
		six();
		Serial.print(" ");
	}
	else if (current_character == '7') {
		seven();
		Serial.print(" ");
	}
	else if (current_character == '8') {
		eight();
		Serial.print(" ");
	}
	else if (current_character == '9') {
		nine();
		Serial.print(" ");
	}
	else if(current_character == ' ') {
		delay(time_unit * 7);
		Serial.print(" ");
	}
}


/* The translate() function translates current character into it's Morse equivalent. */
void translate() {
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
