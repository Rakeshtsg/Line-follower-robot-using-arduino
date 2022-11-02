// blynk Arduino
//Using a IR Sensor|L298N Motor Driver|Arduino UNO
////Circuit. use Pin 10-ENA,Pin 9-IN1,Pin 8-IN2,Pin 7-IN3,Pin 6-IN4,Pin 5 ENB
//This is unlikely to be of much use in a practical applications
//ID OF USER: Rakeshtsg
//INTERFACE: Arduino 

#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enA 10
#define enB 5


 int M1_Speed = 80; // speed of motor 1
 int M2_Speed = 80; // speed of motor 2
 int LeftRotationSpeed = 250;  // Left Rotation Speed
 int RightRotationSpeed = 250; // Right Rotation Speed


 void setup() {

  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

    pinMode(enA,OUTPUT);
    pinMode(enB,OUTPUT);

      pinMode(A0, INPUT); // initialize Left sensor as an input
      pinMode(A1, INPUT); // initialize Right sensor as an input

}

void loop() {

  int LEFT_SENSOR = digitalRead(A0);
  int RIGHT_SENSOR = digitalRead(A1);

if(RIGHT_SENSOR==0 && LEFT_SENSOR==0) {
    forward(); //FORWARD
}

  else if(RIGHT_SENSOR==0 && LEFT_SENSOR==1) {
    right(); //Move Right
 }

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0) {
    left(); //Move Left
}

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==1) {
    Stop();  //STOP
 }
}



void forward()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}

void backward()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}

void right()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}

void left()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}

void Stop()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
}
