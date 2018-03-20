#ifndef floor_h
#define floor_h


#include "display.h"

class FLOOR
{
public:
	FLOOR (int rows_, int columns_);
	~FLOOR();
	void clean_tile(int row, int column);
	bool is_tile_dirty(int row, int column);
	bool is_floor_dirty();//devuelve 0 si esta todo limpio
	void al_draw_floor(DISPLAY &d);//funcion para dibujar, solo falta eso de aca
	unsigned int max_row();
	unsigned int max_column();
private:
	unsigned int columns;
	unsigned int rows;
	bool **tiles;
};


#endif