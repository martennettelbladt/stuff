// Mårten Nettelbladt / 2025-01-23


// Azimuth from two 2D points. First point is origin
// Returns valus in the range [-pi, pi]

#include <math.h>

float getAzimuth(float X1, float Y1, float X2, float Y2)
{
	float x = X2 - X1;
	float y = Y2 - Y1;

	// Handle special cases where x is 0
	if (x == 0)
	{
		if (y > 0) return M_PI_2; // 90 degrees
		if (y < 0) return -M_PI_2; // -90 degrees
		return 0; // exactly at origin
	}
	
	float azimuth = atan2(y, x); // atan2 handles quadrants, returns valus in the range [-pi, pi]
	return azimuth;
}


// Altitude from two 3D points. First point is origin.
// Result as an angle in radians. 0 = Horizon, pi/2 = up, pi/2 = down.

float getAltitude(float X1, float Y1, float Z1, float X2, float Y2, float Z2)
{
	float x = X2 - X1;
	float y = Y2 - Y1;
	float z = Z2 - Z1;

	float distanceXY = sqrt(x * x + y * y);

	// Handle special case where distanceXY is 0
	if (distanceXY == 0)
	{
		if (z > 0) return M_PI_2; // 90 degrees = straight up
		if (z < 0) return -M_PI_2; // -90 degrees = straight down
		return 0; // exactly at origin
		
	float altitude = atan2(z, distanceXY);
	return altitude;
}

// ChatGPT 
