typedef unsigned short uint16_t;

void LedDriver_Create(uint16_t *address);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnAllOn(void);
void LedDriver_TurnOff(int ledNumber);
