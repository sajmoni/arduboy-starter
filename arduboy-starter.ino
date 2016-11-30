#include "Arduboy2.h"
#include "Sprites.h"

Arduboy2 arduboy;

void setup() {
  arduboy.boot();
  arduboy.setFrameRate(60);
}

void loop() {
  arduboy.clear();
  if (!arduboy.nextFrame())
    return;
  arduboy.pollButtons();
  //***GAMEPLAY*****

  arduboy.print("Hello World!");
  
  //***END GAMEPLAY**
  arduboy.display();
}

