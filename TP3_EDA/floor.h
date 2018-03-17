#ifndef floor_h
#define floor_h

class FLOOR
{
public:
	FLOOR(int rows_, int columns_);
	~FLOOR();
	void clean_tile(int row, int column);
	bool is_tile_dirty(int row, int column);
	bool is_floor_dirty();
	unsigned int max_row();
	unsigned int max_column();
private:
	unsigned int columns;
	unsigned int rows;
	bool **tiles;

}


#endif