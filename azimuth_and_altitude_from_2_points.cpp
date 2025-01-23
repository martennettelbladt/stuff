// Mårten Nettelbladt / 2025-01-23


// Azimuth from two 2D points. First point is origin
// Result as an angle in radians. 0 = X-axis. Full circle = 6.28 radians

float getAzimuth(x_1, y_1, x_2, y_2)
{
	x = x_2 - x_1;
	y = y_2 - y_1;
	float azimuth = atanf(abs(y) / abs(x));
	if (x < 0) azimuth = M_PI - azimuth;
	if (y < 0) azimuth = 2 * M_PI - azimuth;
	return azimuth;
}


// Altitude from two 3D points. First point is origin.
// Result as an angle in radians. 0 = Horizon, 3.14 = up, -3.14 = down.

float getAltitude(x_1, y_1, z_1, x_2, y_2, z_2)
{
	x = x_2 - x_1;
	y = y_2 - y_1;
	z = z_2 - z_1;
	float distanceXY = sqrt(pow(x, 2) + pow(y, 2));
	float altitude = atanf(abs(z) / distanceXY);
	if (z < 0) altitude = 0 - altitude;
	return altitude;
}
