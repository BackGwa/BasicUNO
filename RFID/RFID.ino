
#include <MFRC522.h>

#define SS_PIN 0
#define RST_PIN 0

MFRC522 RFID(SS_PIN, RST_PIN);

String RFID_VALUE = "00 00 00 00";

char isRFID();

void setup()
{
  Serial.begin(9600);
  SPI.begin();
  RFID.PCD_Init();
}

/*
void loop(){... isRFID(); ...}
*/

char isRFID()
{
  String content= "";
  byte letter;

  if (!rfid.PICC_IsNewCardPresent())
  {
    return 'N';
  }
  
  if (!rfid.PICC_ReadCardSerial())
  {
    return 'N';
  }

  Serial.print("RFID VALUE >> ");

  for (byte i = 0; i < rfid.uid.size; i++)
  {
     Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(rfid.uid.uidByte[i], HEX);
     content.concat(String(rfid.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(rfid.uid.uidByte[i], HEX));
  }

  content.toUpperCase();

  if (content.substring(1) == RFID_VALUE)
  {
    return 'T'; 
  }
  
  else
  { 
    return 'F';
  }
}
