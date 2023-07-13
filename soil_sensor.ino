//Motor connections
int enA = 9;
int in1 = 8;
int in2 = 7;
int sensor_pin = 12;

void setup()
{
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(sensor_pin, INPUT);

  //Turn off motor - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
void loop()
{
  // This function lets you turn on Motor
  //Set motor to maximum speed
  analogWrite(enA, 255);
  //Turn on motor

  if(digitalRead(sensor_pin) == HIGH)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(2000);
  }
  else
  {
    //Turn off motor
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    delay(2000);
  }
}
