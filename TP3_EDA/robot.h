#ifndef robot_h
#define robot_h

#include "point.h"
#include "defines.h"

class ROBOT
{
public:
	ROBOT(int max_column, int max_row);
	~ROBOT();
	POINT get_coordinates();
	double get_angle();
	double get_radius();
	void set_coordinates(POINT coordinates);
	void set_coordinates(float x, float y);		//hacen lo mismo pero lo hacemos para varios argumentos de entrada, mas comodo
	void new_angle(void);
	void prevent_crash(double unit);
	void al_draw(void);
	bool load_bitmaps_radius(const char * botfile,double radius_, double width, double height);
private:
	POINT p;
	double angle;
	double radius;//radio del robot
	POINT oldp;
	ALLEGRO_BITMAP * bitmap;
}


#endif