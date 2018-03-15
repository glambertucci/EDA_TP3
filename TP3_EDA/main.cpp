#include "simulation.h"
#include <stdlib.h>
#include <time.h>
int main( int argc, char **argv)
{
	if(parseo){
		if(init_allegro())
		{
			srand (time(NULL));

			////////////////////////////////////////////////////////////
			shut_down_allegro();
		}
		else
		{
		mensaje de error
		}
	}
	else
	{
		mensaje de error de parseo
	}
}
