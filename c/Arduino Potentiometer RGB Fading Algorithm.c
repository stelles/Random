//circuit numbers that correspond to RGB light nodes
int red = 11;
int green = 10;
int blue = 9;
 
//number to control which rgb to light up
int fade = 0;
 
//potentiometer variable which will control the speed of the fade
int val;
 
void setup(){
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}
 
void loop(){
  
  
  //read from potentiometer
  //scale value from 0-1023 to 5-200
  val = analogRead(0);
  val = map(val, 0, 1023, 5, 200);
  
  
  //fading algorithm
  //goes through red, green, blue
  //color intensity increases as previous color decreases
  if(fade/255 == 0) {
    analogWrite(red, fade%255);
    analogWrite(blue, 255 - (fade%255));
  }
  if(fade/255 == 1) {
    analogWrite(red, 255 - (fade%255));
    analogWrite(green, fade%255);
  }
  if(fade/255 == 2){
    analogWrite(green, 255-(fade%255));
    analogWrite(blue, fade%255);
  }
  
  
  fade += 5;
 
  if(fade/255==3) fade= 0; 
  
  delay(val);
  }
