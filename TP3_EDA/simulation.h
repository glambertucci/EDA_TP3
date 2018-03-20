#ifndef simulation_h
#define simulation_h

#include "robot.h"
#include "floor.h"

class SIMULATION
{
public:
	SIMULATION(unsigned int fil_, unsigned  int col_, int nbots_, double width, double height);//constructor
	unsigned int run();		//devuelve los ticks
	bool cycle();
	void al_draw();	//dibuja en allegro
	bool border_check(); //se fija de no pasarse en las esquinas
	~SIMULATION();//destructor

private:
	ROBOT * robs;
	unsigned int ticks;
	FLOOR *floor;
	int mode;
};

#endif