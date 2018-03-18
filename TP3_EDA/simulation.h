#ifndef simulation_h
#define simulation_h

#include "robot.h"
#include "floor.h"

class SIMULATION
{
public:
	bool create(unsigned int robots, unsigned int rows, unsigned int columns, unsigned int mode);
	unsigned int run();		//devuelve los ticks
	void destroy();

private:
	ROBOT robs[];
	unsigned int ticks;
	FLOOR *floor;
	int mode;
};

#endif