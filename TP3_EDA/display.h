#ifndef display_h
#define display_h

class DISPLAY
{
public:
	DISPLAY(const char * dirtyfile, const char * clenfile, const char * robotfile, double radius_);
	~DISPLAY();
	void al_draw_robot(float x, float y);
	void al_draw_floor();
	bool check_success();

private:
	ALLEGRO_BITMAP * bitmap_clean;//bitmaps de piso luimpio y sucio
	ALLEGRO_BITMAP * bitmap_dirty;
	ALLEGRO_BITMAP * bitmap_robot;//bitmap de robot
	ALLEGRO_DISPLAY * display;
	bool success_flag;
	double radius;//radio del robot
}


#endif