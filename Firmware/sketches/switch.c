#include "switch.h"

void initSwitch(switch_t* switch_obj)
{
	pinMode(switch_obj->pinNumber, INPUT);
}

bool getSwitchState(switch_t* switch_obj)
{
	switch_obj->state = digitalRead(switch_obj->pinNumber);
	return switch_obj->state;
}
