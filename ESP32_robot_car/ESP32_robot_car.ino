/*
 * control Robot_car powered by ESP32 using your phone
 */
//this sketch uses a bridge between Serial and Classical Bluetooth (SPP)
//and also demonstrate that SerialBt have the same functionalities of a normal Serial

#include "BluetoothSerial.h"
#define CONFIG_Bt_ENABLED
#if !defined(CONFIG_Bt_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBt;
int received;// received value will be stored in this variable
String command;// received value will be stored as CHAR in this variable
//int k = 0;                                                                                                                                                                                                                                                                                                                
const char turnON ='a';
const char turnOFF ='b';

void setup() {
  Serial.begin(115200);
  SerialBt.begin("ESP32_DevKit_V1"); //Bluetooth device name
  Serial.println("the device started, now you can pair it with bluetooth!");
  Serial.println("to turn ON send: a");//print on serial monitor  
  Serial.println("to turn OFF send: b"); //print on serial monitor 
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(27,OUTPUT); 
}

void loop() {
    
  if (SerialBt.available()) {
    command =SerialBt.readString();
    
    //SerialBt.print("Received:");// write on Bt app
    //SerialBt.println(command);// write on Bt app      
    Serial.print ("Received:");//print on serial monitor
    Serial.println(command);//print on serial monitor    
    //SerialBt.println(command);//print on the app    

if(command == "forward")
{
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(14, HIGH);
digitalWrite(27, LOW);
//k=1;
}
 
if(command == "backward")
{
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(14, LOW);
digitalWrite(27, HIGH);
//k=2;
}
 
if(command == "right")
{/*
if (k==2)
{*/
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(14, HIGH);
digitalWrite(27, LOW);
/* if you want the robot car to just turn for just 1 second and continue the command it was following previously, you can uncomment this 
delay(1000);
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(14, LOW);
digitalWrite(27, HIGH);
}
else
{
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(14, HIGH);
digitalWrite(27, LOW);
delay(1000);
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(14, HIGH);
digitalWrite(27, LOW);
}*/
}
 
if(command == "left")
{
/*if (k==2) 
{*/ 
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(14, LOW);
digitalWrite(27, LOW);/*
delay(1000); if you want the robot car to just turn for just 1 second and continue the command it was following previously, you can uncomment this 
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(14, LOW);
digitalWrite(27, HIGH);
}
else
{
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(14, LOW);
digitalWrite(27, LOW);
delay(1000);
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(14, HIGH);
digitalWrite(27, LOW);
}*/
}

if(command == "stop")
{
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(14, LOW);
digitalWrite(27, LOW);
}
}
command ="";
}