#define display_width 800.0
#define display_height 600.0

#define column_height
#define column_width(columns) (display_width/columns)
#define MAX_BOTS 30 //no se elijan ustedes
typedef struct
{
	unsigned int fil=10;
	unsigned int col=10;
	unsigned int bots_num=5;
	unsigned int mode=1;

}userData;
// si falta un parametro sera definido asi.
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_native_dialog.h>