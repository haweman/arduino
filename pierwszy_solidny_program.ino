int echo[7];
int trig[7];

long h_time, h_distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  hcsr_begin(0, 11, 12);
  hcsr_begin(1, 6, 7);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(!hcsr_getDistance(0)) Serial.print("ERROR");
 else Serial.print(hcsr_getDistance(0));
 Serial.print("\t");
 delay(100);
 
 if(!hcsr_getDistance(1)) Serial.print("ERROR");
 else Serial.print(hcsr_getDistance(1));
 Serial.print("\n");
 
  delay(400);
}

//funkcja hcsr_begin ustala nowy czujnik
//index oznacza numer porządkowy czujnika
//można zapisać maksymalnie 8 czujników począwszy od nr 0
// hcsr_begin( 0, 11, 12); - oznacza czujnik nr 0, sygnał echo na
//pinie nr11, sygnał trigger na pinie nr 12

volatile void hcsr_begin(int index, int echoPin, int trigPin)
{


    echo[ index ] = echoPin;
    trig[ index ] = trigPin;

    pinMode( echo[ index ], INPUT);
    pinMode( trig[ index ], OUTPUT);
    
}

//funkcja zwraca zmierzony dystans w cm
//jako argument podajemy nr czujnika (od 0 do 7)
// hcsr_getDistance(0) pobiera dane z czujnika nr 0.

float hcsr_getDistance(int index) 
{

  digitalWrite(trig[ index], LOW);
  delayMicroseconds(2);
  digitalWrite(trig[ index], HIGH);
  delayMicroseconds(10);
  digitalWrite(trig[ index], LOW);

  h_time = pulseIn(echo[ index ], HIGH);
  if(h_time >= 23200) return 0;
  delay(50);
  return h_time / 58.00;
  
}
