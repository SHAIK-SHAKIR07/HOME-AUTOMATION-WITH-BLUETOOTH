#define relay1 2
#define relay2 3
#define relay3 4
#define relay4 5
char val;
void setup() {
 pinMode(relay1,OUTPUT);
 pinMode(relay2,OUTPUT);
 pinMode(relay3,OUTPUT);
 pinMode(relay4,OUTPUT);
 digitalWrite(relay1,LOW);
 digitalWrite(relay2,LOW);
 digitalWrite(relay3,LOW);
 digitalWrite(relay4,LOW);
 Serial.begin(9600);
 Serial.begin(9600);
}
void loop() {
//cek data serial from bluetooth android App
if( Serial.available() >0 ) {
 val = Serial.read();
 Serial.println(val); 
}
//Relay is on
 if( val == '1' ) {
 digitalWrite(relay1,HIGH); }
 else if( val == '2' ) {
 digitalWrite(relay2,HIGH); }
 else if( val == '3' ) {
 digitalWrite(relay3,HIGH); }
 else if( val == '4' ) {
 digitalWrite(relay4,HIGH); }
 //relay all on
 else if( val == '9' ) {
 digitalWrite(relay1,HIGH);
 digitalWrite(relay2,HIGH);
 digitalWrite(relay3,HIGH);
 digitalWrite(relay4,HIGH);
}
 else if( val == 'A' ) {
 digitalWrite(relay1,LOW); }
 else if( val == 'B' ) {
 digitalWrite(relay2,LOW); }
 else if( val == 'C' ) {
 digitalWrite(relay3,LOW); }
 else if( val == 'D' ) {
 digitalWrite(relay4,LOW); }
 else if( val == 'I' ) {
 digitalWrite(relay1,LOW);
 digitalWrite(relay2,LOW);
 digitalWrite(relay3,LOW);
 digitalWrite(relay4,LOW);
}
}

WORKING DEMO : 

https://www.youtube.com/watch?v=OmyzJ_P9TJs