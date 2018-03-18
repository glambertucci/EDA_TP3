#include "robot.h"
#include "defines.h"
#include <stdlib.h>

ROBOT::ROBOT(int max_column, int max_row)
{
	p.set_x_coord((rand() % (max_column))*1000000 / 1000000.0);	//eso ultimo es para hacerlo tipo float
	p.set_y_coord((rand() % (max_row)) * 1000000 / 1000000.0);
}

ROBOT::~ROBOT()
{
		al_destroy_bitmap(bitmap);
}

POINT ROBOT::get_coordinates()
{
	return p;
}

double
ROBOT::get_angle()
{
	return angle;
} double ROBOT::get_radius()
{
	return radius;
}

void ROBOT::set_coordinates(POINT coordinates)
{
	this->oldp.set_x_coord(p.get_x_coord);
	this->oldp.set_y_coord(p.get_y_coord);
	p.set_x_coord(coordinates.get_x_coord());
	p.set_y_coord(coordinates.get_y_coord());
}

void ROBOT::set_coordinates(float x, float y)
{
	oldp.set_x_coord(p.get_x_coord);
	oldp.set_y_coord(p.get_y_coord);
	p.set_x_coord(x);
	p.set_y_coord(y);
}

void ROBOT::new_angle(void)
{
	angle = (rand() % 360) * 3.14/ 180.0;
}
void ROBOT::prevent_crash(double unit)//basicamente si despues de updetearlo se paso de los limites lo devuelve a la ultima posiucion y le da un nuevo angulo
{
	this->p.set_x_coord(oldp.get_x_coord);
	this->p.set_y_coord(oldp.get_y_coord);

	this->new_angle();
}
void ROBOT :: al_draw() //dibuja el robot
{
	al_draw_scaled_bitmap(bitmap, 0, 0, al_get_bitmap_width(bitmap), al_get_bitmap_height(bitmap), p.get_x_coord - radius, p.get_y_coord - radius, radius * 2, radius * 2, 0);
}

bool ROBOT::load_bitmaps_radius(const char * botfile, double radius_, double width, double height) //porque no se llamar constructores de los robots:
{
	bool succes = false;
	radius = radius_;
	if (bitmap = al_load_bitmap(botfile))
	{
		succes = true;
	}
	return succes;
}