
float angle = atanf(abs(y) / abs(x));
if (x < 0) angle = M_PI - angle;
if (y < 0) angle = 2 * M_PI - angle;
	
float distance = sqrt(pow(x, 2) + pow(y, 2));




// From Bela. Joystick with range (0-1, 0-1) and origin (0.5, 0.5). Angle in radians

float angle = atanf(abs(y - 0.5) / abs(x - 0.5));
if (x < 0.5) angle = M_PI - angle;
if (y < 0.5) angle = 2 * M_PI - angle;
	
float distance = sqrt(pow(x - 0.5, 2) + pow(y - 0.5, 2));
