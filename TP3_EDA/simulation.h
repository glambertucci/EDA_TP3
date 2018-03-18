#ifndef simulation_h
#define simulation_h

#include "robot.h"
#include "floor.h"

class simulation
{
public:
	simulation(unsigned int fil_, unsigned  int col_, const char * dirtyfile, int nbots_, const char * clenfile, const char * botfile, double width, double height);//constructor
	unsigned int run();		//devuelve los ticks
	bool cycle();
	void al_draw();	//dibuja en allegro
	bool border_check(); //se fija de no pasarse en las esquinas
	~simulation();//destructor

private:
	ROBOT * robs;
	unsigned int ticks;
	FLOOR *floor;
	int mode;
};

#endif