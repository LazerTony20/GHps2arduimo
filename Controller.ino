#include <XInput.h>

typedef struct buttons_t
{
  union
  {
    struct
    {
      uint16_t green : 1;      // BUTTON_A
      uint16_t red : 1;        // BUTTON_B
      uint16_t blue : 1;       // BUTTON_X
      uint16_t yellow : 1;     // BUTTON_Y
      uint16_t orange : 1;     // BUTTON_LB
      uint16_t select : 1;     // BUTTON_BACK
      uint16_t start : 1;      // BUTTON_START
      uint16_t dpad_up : 1;    // DPAD_UP
      uint16_t dpad_down : 1;  // DPAD_DOWN
    } bits;
    uint16_t data;
  } btns;
  int16_t joystick_right_x;
};


void setup()
{
  // XInput.begin();
  // Serial.begin(9600);          // start serial for output
 
}

void loop()
{
  // Nothing to do here
}
