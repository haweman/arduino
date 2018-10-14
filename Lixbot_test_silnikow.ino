// defincja pinow

int ENA = 6 ;
int IN1 = 7 ;
int IN2 = 8 ;
int IN3 = 9 ; 
int IN4 = 10 ;
int ENB = 11 ;

void setup () 
 { 
  //ustawienie pinow jako wyjscia
  
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
 } 
 void loop () 
 { 
 // Jazda do przodu
 
 analogWrite (ENA, 100) ; //ustawienie szybkosci silnikow w zakresie 0 do 255
 analogWrite (ENB, 100);  //ustawienie szybkosci silnikow w zakresie 0 do 255
 digitalWrite (IN1, LOW) ; // lewe silniki jazda do przodu
 digitalWrite (IN2, HIGH);
 digitalWrite (IN4, LOW) ; // prawe silniki jazda do przodu
 digitalWrite (IN3, HIGH);
 delay (500); // czekaj 2 sekundy
  
 // jazda do tyłu 
 analogWrite (ENA, 100) ; //ustawienie szybkosci silnikow w zakresie 0 do 255
 analogWrite (ENB, 100);  //ustawienie szybkosci silnikow w zakresie 0 do 255
 digitalWrite (IN1, HIGH) ; // lewe silniki jazda do tyłu
 digitalWrite (IN2, LOW);
 digitalWrite (IN4, HIGH) ; // prawe silniki jazda do tyłu
 digitalWrite (IN3, LOW); 
 delay (500); // czekaj 2 sekundy
/*
 // skret w lewo
 analogWrite (ENA, 100) ; //ustawienie szybkosci silnikow w zakresie 0 do 255
 analogWrite (ENB, 100);  //ustawienie szybkosci silnikow w zakresie 0 do 255
 digitalWrite (IN1, HIGH) ; // lewe silniki jazda do tyłu
 digitalWrite (IN2, LOW);
 digitalWrite (IN4, LOW) ; // prawe silniki jazda do przodu
 digitalWrite (IN3, HIGH); 
 delay (2000); // czekaj 2 sekundy
 
 // skret w prawo
 analogWrite (ENA, 100) ; //ustawienie szybkosci silnikow w zakresie 0 do 255
 analogWrite (ENB, 100);  //ustawienie szybkosci silnikow w zakresie 0 do 255
 digitalWrite (IN1, LOW) ; // lewe silniki jazda do przodu
 digitalWrite (IN2, HIGH);
 digitalWrite (IN4, HIGH) ; // prawe silniki jazda do tyłu
 digitalWrite (IN3, LOW); 
 delay (2000); // czekaj 2 sekundy
 
 // hamowanie 
 analogWrite (ENA, 100) ; //ustawienie szybkosci silnikow w zakresie 0 do 255
 analogWrite (ENB, 100);  //ustawienie szybkosci silnikow w zakresie 0 do 255
 digitalWrite (IN1, HIGH) ; // lewe silniki jazda do przodu
 digitalWrite (IN2, HIGH);
 digitalWrite (IN4, HIGH) ; // prawe silniki jazda do tyłu
 digitalWrite (IN3, HIGH); 
 delay (2000); // czekaj 2 sekund
 */
 } 

