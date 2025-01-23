// Mårten Nettelbladt / 2025-01-23


#include <math.h>

// Azimuth from two 2D points. First point is origin
// Returns value in the range [-pi, pi]
float getAzimuth(float X1, float Y1, float X2, float Y2)
{
    float x = X2 - X1;
    float y = Y2 - Y1;

    // Use atan2 to directly compute the azimuth, no need for special cases
    float azimuth = atan2(y, x); // atan2 handles all quadrants and [-pi, pi] range
    return azimuth;
}


// Altitude from two 3D points. First point is origin
// Returns result as an angle in radians: 0 = Horizon, pi/2 = Up, -pi/2 = Down

float getAltitude(float X1, float Y1, float Z1, float X2, float Y2, float Z2)
{
    float x = X2 - X1;
    float y = Y2 - Y1;
    float z = Z2 - Z1;

    float distanceXY = sqrt(x * x + y * y);

    // Handle special case where distanceXY is 0
    if (distanceXY == 0)
    {
        if (z > 0) return M_PI_2;   // Straight up
        if (z < 0) return -M_PI_2;  // Straight down
        return 0;                   // Origin point
    }

    float altitude = atan2(z, distanceXY); // atan2 automatically handles signs
    return altitude;
}
