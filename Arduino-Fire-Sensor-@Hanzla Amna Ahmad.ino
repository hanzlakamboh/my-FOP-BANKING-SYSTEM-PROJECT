/*
HANZLA SAJJAD    403214           |    FFFF  I  RRRR  EEEE     AAAAA  L     AAAAAA  RRRR   M     M      |
AMNA SIDDIQUI    406130           |    F     I  R   R E        A   A  L     A    A  R   R  M M M M      |
AHMAD NASIR      409959           |    FFFF  I  RRRR  EEEE     AAAAA  L     AAAAAA  RRRR   M  M  M      |
                                  |    F     I  R R   E        A   A  L     A    A  R  R   M     M      |
                                  |    F     I  R  R  EEEE     A   A  LLLLL A    A  R   R  M     M      |
 */
const int buzzerPin = 9;
const int fireSensorPin = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
}
void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}

