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
}

POINT
ROBOT::get_coordinates()
{
	return p;
}

double
ROBOT::get_direction()
{
	return direction;
}

void ROBOT::set_coordinates(POINT coordinates)
{
	p.set_x_coord(coordinates.get_x_coord());
	p.set_y_coord(coordinates.get_y_coord());
}

void ROBOT::set_coordinates(float x, float y)
{
	p.set_x_coord(x);
	p.set_y_coord(y);
}

void ROBOT::set_direction(double direction_)
{
	direction = direction_;
}