// Mårten Nettelbladt / 2025-01-23

// Azimuth from two 2D points. First point is origin


float getAzimuth(x1, y1, x2, y2)
{
	x = x2 - x1;
	y = y2 - y1;
	float azimuth = atanf(abs(y) / abs(x));
	if (x < 0) azimuth = M_PI - azimuth;
	if (y < 0) azimuth = 2 * M_PI - azimuth;
	return azimuth;
}


// Altitude from two 3D points. First point is origin

float getAltitude(x1, y1, z1, x2, y2, z2)
{
	x = x2 - x1;
	y = y2 - y1;
	z = z2 - z1;
	float distanceXY = sqrt(pow(x, 2) + pow(y, 2));
	float altitude = atanf(abs(z) / distanceXY);
	if (z < 0) altitude = 0 - altitude;
	return altitude;
}
