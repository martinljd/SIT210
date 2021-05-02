int Led = D7; 


void setup() {

  pinMode(Led, OUTPUT);

}

// Function for a morsecode dot
void Dot()
{
    digitalWrite(Led, HIGH);
    delay(100);
    digitalWrite(Led, LOW);
    delay(100);
}

// Function for a morsecode line
void Line()
{
    digitalWrite(Led, HIGH);
    delay(300);
    digitalWrite(Led, LOW);
    delay(100);
}

//Function for space between letters
void Space()
{
    delay(500);
}

void loop() {
 
//Letter J
Dot();
Line();
Line();
Line();
Space();

//Letter I
Dot();
Line();
Space();

//Letter D
Line();
Dot();
Dot();
Space();

//Letter O
Line();
Line();
Line();
Space();

//Letter N
Line();
Dot();
Space();

//Letter G
Line();
Line();
Dot();
Space();
 
 
}