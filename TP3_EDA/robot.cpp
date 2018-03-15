#include "robot.h"
#include "defines.h"
#include <stdlib.h>

ROBOT::ROBOT(int max_column, int max_row)
{
	p.set_x_coord(rand()%(max_column * column_width(max_column)))
}

ROBOT::~ROBOT()
{
}

POINT
ROBOT::get_coordinates()
{

}

double
ROBOT::get_direction()
{

}

void ROBOT::set_coordinates(POINT coordinates)
{

}

void ROBOT::set_direction(double direction)
{

}