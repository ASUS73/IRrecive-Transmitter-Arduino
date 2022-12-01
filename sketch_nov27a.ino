#include <IRremote.h>
#define code1 16718055    //Number 2
#define code2 16730805    //Number 8
#define code3 16716015    //Number 4
#define code4 16734885    //Number 6
#define code5 16726215    //Number 5

const int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;

//Motor Right?
int In1 = 7;
int In2 = 6;
int In3 = 5;
int In4 = 2;
int Ena = 0;
int Enb = 1;

//Motor Left
int in1 = 8;
int in2 = 11;
int in3 = 12;
int in4 = 13;
int ena = 4;
int enb = 10;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);

  //All-Motors
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
  if(irrecv.decode(&results)){
    unsigned int data = results.value;
    switch(data){
      case code1:
        Forward();
        break;
      
      case code2:
        Backward();
        break;

      case code3:
        Left();
        break;
      
      case code4:
        Right();
        break;

      case code5:
        STOP();
        break;
    }
    Serial.println(data);
    irrecv.resume();
  }
}

//==========================================================================
void Forward(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  digitalWrite(Ena, HIGH);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}

void Backward(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  digitalWrite(Ena, LOW);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}

void Right(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  digitalWrite(Ena, HIGH);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}

void Left(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  digitalWrite(Ena, HIGH);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}

void STOP(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  digitalWrite(Ena, HIGH);
  digitalWrite(Enb, HIGH);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(ena, HIGH);
  digitalWrite(enb, HIGH);
}
