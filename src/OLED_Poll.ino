#include "oled-wing-adafruit.h"

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int questionNumber = 1;
int choiceAs = 0;
int choiceBs = 0;
int choiceCs = 0;

OledWingAdafruit display;

void setup()
{
  display.setup();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Welcome to Pollster");
  display.display();
  delay(3500);
  display.clearDisplay();
  display.display();
  delay(700);
  display.println("Your choices are Abe, Belinda, and Carson.");
  display.display();
  delay(3500);
  display.clearDisplay();
  display.display();
  delay(700);
  display.println("Let us know who you think is the best.");
  delay(3500);
  display.clearDisplay();
  display.display();
  delay(700);
}
void loop()
{
  if (questionNumber == 1)
  {
    display.println("Who is the most reliable?");
    display.display();
    if (display.pressedA())
    {
      choiceAs++;
      questionNumber++;
      display.clearDisplay();
      display.display();
      delay(1500);
    }
  }
  else if (questionNumber == 2)
  {
  }
  else if (questionNumber == 3)
  {
  }
  else
  {
    display.clearDisplay();
    display.println("ERROR");
  }
}