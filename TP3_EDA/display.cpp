#include "display.h"
#include "defines.h"


DISPLAY::DISPLAY(const char * dirtyfile, const char * cleanfile, const char * robotfile, double radius_)
{
	success_flag = 0;
	radius = radius_;
	bitmap_dirty = al_load_bitmap(dirtyfile);
	bitmap_clean = al_load_bitmap(cleanfile);
	bitmap_robot = al_load_bitmap(robotfile);
	display = al_create_display(display_width, display_height);
	if((bitmap_dirty != NULL) && (bitmap_clean != NULL) && (bitmap_robot != NULL) && (display != NULL))
	{
		success_flag = 1;
	}
}


DISPLAY::~DISPLAY()
{
	al_destroy_bitmap(bitmap_dirty);
	al_destroy_bitmap(bitmap_clean);
	al_destroy_bitmap(bitmap_robot);
	al_destroy_display(display);
}

void
DISPLAY :: al_draw_robot(float x, float y) //dibuja el robot
{
	al_draw_scaled_bitmap(bitmap_robot, 0, 0, al_get_bitmap_width(bitmap_robot), al_get_bitmap_height(bitmap_robot), x - radius, y - radius, radius * 2, radius * 2, 0);
}

void
DISPLAY::al_draw_floor()
{

}

bool
DISPLAY::check_success()
{
	return success_flag;
}