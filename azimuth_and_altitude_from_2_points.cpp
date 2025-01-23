// Mårten Nettelbladt / 2025-01-23


// Azimuth from two 2D points. First point is origin
// Result as an angle in radians. 0 = X-axis. Full circle = 6.28 radians

float getAzimuth(X1, Y1, X2, Y2)
{
	x = X2 - X1;
	y = Y2 - Y1;
	float azimuth = atanf(abs(y) / abs(x));
	if (x < 0) azimuth = M_PI - azimuth;
	if (y < 0) azimuth = 2 * M_PI - azimuth;
	return azimuth;
}


// Altitude from two 3D points. First point is origin.
// Result as an angle in radians. 0 = Horizon, 3.14 = up, -3.14 = down.

float getAltitude(X1, Y1, Z1, X2, Y2, Z2)
{
	x = X2 - X1;
	y = Y2 - Y1;
	z = Z2 - Z1;
	float distanceXY = sqrt(pow(x, 2) + pow(y, 2));
	float altitude = atanf(abs(z) / distanceXY);
	if (z < 0) altitude = 0 - altitude;
	return altitude;
}
