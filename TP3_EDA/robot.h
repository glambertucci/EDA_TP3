#ifndef robot_h
#define robot_h

#include "point.h"
#include "defines.h"
#include "display.h"

class ROBOT
{
public:
	ROBOT(int max_column, int max_row);
	~ROBOT();
	POINT get_coordinates();
	double get_angle();
	double get_radius();
	void set_coordinates(POINT coordinates);
	void set_coordinates(float x, float y);		//hacen lo mismo pero lo hacemos para varios argumentos de entrada, más cómodo
	void new_angle(void);
	void prevent_crash(double unit);
	void al_draw(DISPLAY &d);
private:
	POINT p;
	double angle;
	POINT oldp;
}


#endif