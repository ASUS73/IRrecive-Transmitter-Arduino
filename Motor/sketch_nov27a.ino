//Motor kanan
int In1 = 7;
int In2 = 6;
int In3 = 5;
int In4 = 2;
int Ena = 0;
int Enb = 1;

//Motor kiri
int in1 = 8;
int in2 = 11;
int in3 = 12;
int in4 = 13;
int ena = 4;
int enb = 10;

void setup(){
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(Ena, OUTPUT);
  pinMode(Enb, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
}

void loop(){
  digitalWrite(In1, HIGH);    //Forward
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  digitalWrite(Ena, HIGH);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, HIGH);    //Forward
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
  delay(5000);
}
