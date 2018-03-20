#include "simulation.h"


SIMULATION ::SIMULATION(unsigned int fil_, unsigned  int col_, int nbots_, double width, double height)
{


}

SIMULATION:: ~SIMULATION()
{
	delete[] robs;
	delete[] floor;
}

unsigned int
SIMULATION::run()
{
}		//devuelve los ticks


bool
SIMULATION::cycle()
{
}


void
SIMULATION::al_draw()
{
}	//dibuja en allegro


bool
SIMULATION::border_check()
{
}