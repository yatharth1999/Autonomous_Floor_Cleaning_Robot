// 9th and 10th for left motor

int op1=9;
int op2=10;

// 11th and 12th are for right motor

int op3=11;
int op4=12;

// relay for mop

int relay1=5;

//relay for pump

int relay2=6;

void setup() {
  // put your setup code here, to run once:
pinMode(op1,OUTPUT);
pinMode(op2,OUTPUT);
pinMode(op3,OUTPUT);
pinMode(op4,OUTPUT);
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
digitalWrite(op1,LOW);
digitalWrite(op2,LOW);
digitalWrite(op3,LOW);
digitalWrite(op4,LOW);
digitalWrite(relay1,LOW);
digitalWrite(relay2,LOW);
}

void forward()
{
  digitalWrite(op1,HIGH);
  digitalWrite(op2,LOW);
  digitalWrite(op3,HIGH);
  digitalWrite(op4,LOW);

}

void stop_robo()
{
  digitalWrite(op1,LOW);
  digitalWrite(op2,LOW);
  digitalWrite(op3,LOW);
  digitalWrite(op4,LOW);

}

void backward()
{
  digitalWrite(op1,LOW);
  digitalWrite(op2,HIGH);
  digitalWrite(op3,LOW);
  digitalWrite(op4,HIGH);

}

void left()
{
  digitalWrite(op1,HIGH);
  digitalWrite(op2,LOW);
  digitalWrite(op3,LOW);
  digitalWrite(op4,LOW);

}

void right()
{
  digitalWrite(op1,LOW);
  digitalWrite(op2,LOW);
  digitalWrite(op3,HIGH);
  digitalWrite(op4,LOW);

}

void pump_on()
{
  digitalWrite(relay2,HIGH);
  delay(3000);
  digitalWrite(relay2,LOW);
}

void clean()
{
  digitalWrite(relay1,HIGH);
  
}

void stop_clean()
{
  digitalWrite(relay1,LOW);
}

void start()
{
  pump_on();
  clean();
}

void loop() 
{
  start();
  forward();
  delay(3000);
  stop_clean();
  stop_robo();
  delay(1500);
}
