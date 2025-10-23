int RELAY = 13;  //relay pin is D10
int incomingByte; // variable to accept data from serial

void setup()
{
  Serial.begin(9600);  //set baud rate 9600
  pinMode(RELAY, OUTPUT); // inilize relay
  Serial.println(" Bluetooth Based Electronic Lock");
}

void loop()
{
  if (Serial.available() > 0)  //check serial data is available or not
    incomingByte = Serial.read(); //if availabe save data in incoming byte variable

  if (incomingByte == '0' )  // check data is 1 or not
    digitalWrite(RELAY, HIGH); // if it is 1 turn on relay
  if (incomingByte == '1' ) // check data is 0 or not
    digitalWrite(RELAY, LOW); //if it is 0 turn off relay
}