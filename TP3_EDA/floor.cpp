#include "floor.h"
#include "defines.h"
FLOOR::FLOOR(int rows_, int columns_, const char * dirtyfile, const char * cleanfile)			//inicializamos todas las baldosas como sucias
{
	rows = rows_;
	columns = columns_;
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < columns_; j++)
		{
			tiles[i][j] = 1;
		}
	}
	bitmap_dirty = al_load_bitmap(dirtyfile);
	bitmap_clean = al_load_bitmap(cleanfile);
}
FLOOR::~FLOOR()
{
	al_destroy_bitmap(bitmap_dirty);
	al_destroy_bitmap(bitmap_clean);
}
void FLOOR::clean_tile(int row, int column)
{
	tiles[row][column] = 0;			//el estado de la columna es ahora limpia
}

bool FLOOR::is_tile_dirty(int row, int column)
{
	return (tiles[row][column] == 1);
}

bool FLOOR::is_floor_dirty()	//ve si hay alguna balsoda sucia, si esta sucio -> 1, todo limpio -> 0
{
	int dirty = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (tiles[i][j] == 1)			// ¿esta sucia esta baldosa?
				dirty = 1;
		}
	}
	return dirty;				//se puede hacer mas eficiente este metodo con 2 returns pero no se si es contra las buenas practicas
}

unsigned int FLOOR::max_row()
{
	return rows;
}

unsigned int FLOOR::max_column()
{
	return columns;
}
