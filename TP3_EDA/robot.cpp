#include "robot.h"
#include <stdlib.h>



ROBOT::ROBOT(int max_column, int max_row)
{
	this->p.set_x_coord((rand() % (max_column))*1000000 / 1000000.0);	//eso ultimo es para hacerlo tipo float
	this->p.set_y_coord((rand() % (max_row)) * 1000000 / 1000000.0);
}


ROBOT::~ROBOT()
{
		
}


POINT
ROBOT::get_coordinates()
{
	return p;
}


double
ROBOT::get_angle()
{
	return angle;
}


double
ROBOT::get_radius()
{
	return radius;
}


void
ROBOT::set_coordinates(POINT coordinates)
{
	this->oldp.set_x_coord(p.get_x_coord);
	this->oldp.set_y_coord(p.get_y_coord);
	p.set_x_coord(coordinates.get_x_coord());
	p.set_y_coord(coordinates.get_y_coord());
}


void
ROBOT::set_coordinates(float x, float y)
{
	oldp.set_x_coord(p.get_x_coord);
	oldp.set_y_coord(p.get_y_coord);
	p.set_x_coord(x);
	p.set_y_coord(y);
}


void
ROBOT::new_angle(void)
{
	angle = (rand() % 360) * 3.14/ 180.0;
}


void
ROBOT::prevent_crash(double unit)//basicamente si despues de updetearlo se paso de los limites lo devuelve a la ultima posiucion y le da un nuevo angulo
{
	this->p.set_x_coord(oldp.get_x_coord);
	this->p.set_y_coord(oldp.get_y_coord);

	this->new_angle();
}


void
ROBOT :: al_draw(DISPLAY &d) //dibuja el robot
{
	d.al_draw_robot(p.get_x_coord(), p.get_y_coord());
}


