#include "simulation.h"
simulation ::simulation(unsigned int fil_, unsigned  int col_, const char * dirtyfile, int nbots_, const char * clenfile, const char * botfile, double width, double height)
{


}

simulation:: ~simulation()
{
	delete[] robs;
	delete[] floor;
}