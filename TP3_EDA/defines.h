#define display_width 800
#define display_height 600

#define column_height
#define column_width(columns) (display_width/columns)
#define MAX_BOTS 30 //no se elijan ustedes
typedef struct
{
	unsigned int height=10;
	unsigned int width=10;
	unsigned int bots_num=5;
	unsigned int mode=1;

}userData;
// si falta un parametro sera definido asi.