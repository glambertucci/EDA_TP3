#ifndef robot_h
#define robot_h

#include "point.h"


class ROBOT
{
public:
	ROBOT(int max_column, int max_row);
	~ROBOT();
	POINT get_coordinates();
	double get_direction();
	void set_coordinates(POINT coordinates);
	void set_direction(double direction);
private:
	POINT p;
	double direction;
}


#endif