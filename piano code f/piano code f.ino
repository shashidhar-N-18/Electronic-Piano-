#define T_C 300
#define T_D 294
#define T_E 330
#define T_F 400
#define T_G 500
#define T_A 440
#define T_B 493

const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;

const int G = 6;
const int A = 5;
const int B = 4;


const int Buzz = 12;
const int LED = 13;

void setup()
{



  pinMode(LED, OUTPUT);

  pinMode(C, INPUT);
  
  
  pinMode(D, INPUT);
  
  
  pinMode(E, INPUT);
  
  
  pinMode(F, INPUT);
  
  pinMode(G, INPUT);
  
  pinMode(A, INPUT);
  
  pinMode(B, INPUT);


   


}

void loop()
{
  


  while(digitalRead(C) == HIGH)
  {
    tone(Buzz,T_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(D) == HIGH)
  {
    tone(Buzz,T_D);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(E) == HIGH)
  {
    tone(Buzz,T_E);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(F) == HIGH)
  {
    tone(Buzz,T_F);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(G) == HIGH)
  {
    tone(Buzz,T_G);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(A) == HIGH)
  {
    tone(Buzz,T_A);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(B) == HIGH)
  {
    tone(Buzz,T_B);
    digitalWrite(LED,HIGH);
  }

  noTone(Buzz);
  digitalWrite(LED,LOW);

 


}





