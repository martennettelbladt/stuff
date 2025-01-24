// Mårten Nettelbladt / 2025-01-23


#include <math.h>

// Azimuth from two 2D points
// First point is origin. Returns value in the range [-pi, pi]

float getAzimuth(float X1, float Y1, float X2, float Y2)
{
    float x = X2 - X1;
    float y = Y2 - Y1;

    float azimuth = atan2(y, x); // atan2 handles all quadrants and avoids division by zero
    return azimuth;
}


// Altitude from two 3D points
// First point is origin. Returns angle in the range [-pi/2, pi/2]

float getAltitude(float X1, float Y1, float Z1, float X2, float Y2, float Z2)
{
    float x = X2 - X1;
    float y = Y2 - Y1;
    float z = Z2 - Z1;

    float distanceXY = sqrt(x * x + y * y);
    float altitude = atan2(z, distanceXY); // atan2 automatically handles signs and avoids division by zero
    return altitude;
}
