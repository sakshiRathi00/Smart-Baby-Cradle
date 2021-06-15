int moisture=8;
int pir=7;
int pirVal;
int sound=5;
int SoundVal;
int mSense;
int buzzer=3;
int led=12;



void setup() {

 // pinMode(flame,INPUT);
  
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
    pinMode(moisture,INPUT);

  pinMode(sound,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {

  mSense=digitalRead(moisture);
  Serial.println(mSense);

  pirVal=digitalRead(pir);
  //Serial.println(mSense);


  SoundVal=digitalRead(sound);
 // Serial.println(mSense);

  if(SoundVal==1)
  {
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }

   if(pirVal==1||mSense==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  


}
