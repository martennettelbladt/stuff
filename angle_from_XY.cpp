// From Bela. Joystick with range (0-1, 0-1) and origin (0.5, 0.5) needs recalculation for origin (0, 0)
float x = 1 - (analogRead(context, 0, 4));
float y = 1 - (analogRead(context, 0, 5));

float angle = atanf(abs(y - 0.5) / abs(x - 0.5));
if (x < 0.5) angle = M_PI - angle;
if (y < 0.5) angle = 2 * M_PI - angle;
	
float distance = sqrt(pow(x - 0.5, 2) + pow(y - 0.5, 2));
