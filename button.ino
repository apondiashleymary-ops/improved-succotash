 int ledPin=19;  //led pin
 int buttonPin=22;   //pushbutton is connected
 int buttonstate=1;   //varibale for reading button status
 
//
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);    //declare led as output
   pinMode( buttonPin,INPUT);  //declare button as input

}

void loop() {
  // put your main code here, to run repeatedly:
   buttonstate=digitalRead( buttonPin);
  if( buttonstate==HIGH)//
  {
   digitalWrite(ledPin,HIGH);
   Serial.println("Led is On");
  

  }
  else
  {
    digitalWrite(ledPin,LOW);
       Serial.println("Led is Off");
         
  }
}
