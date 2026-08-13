/*
  DC Motor Test
  L293D Motor Driver

  Pin 5 controls speed using PWM.
  Pins 4 and 3 control direction.
*/

const int motorEnable = 5;  // L293D pin 1
const int motorInput1 = 4;  // L293D pin 2
const int motorInput2 = 3;  // L293D pin 7

void setup()
{
  pinMode(motorEnable, OUTPUT);
  pinMode(motorInput1, OUTPUT);
  pinMode(motorInput2, OUTPUT);

  Serial.begin(9600);

  // Set one motor direction
  digitalWrite(motorInput1, HIGH);
  digitalWrite(motorInput2, LOW);

  Serial.println("DC Motor PWM Test");
}

void loop()
{
  // Motor off
  analogWrite(motorEnable, 0);
  Serial.println("Motor: OFF | PWM: 0");
  delay(2000);

  // Low speed
  analogWrite(motorEnable, 120);
  Serial.println("Motor: LOW | PWM: 120");
  delay(3000);

  // Medium speed
  analogWrite(motorEnable, 190);
  Serial.println("Motor: MEDIUM | PWM: 190");
  delay(3000);

  // Maximum speed
  analogWrite(motorEnable, 255);
  Serial.println("Motor: HIGH | PWM: 255");
  delay(3000);
}