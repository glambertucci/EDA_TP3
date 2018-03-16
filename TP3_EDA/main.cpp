#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_native_dialog.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "simulation.h"
#include "parsecmd.h"
#include "defines.h"
#include "parse_callback.h"
#include "allegro_start_shutdown.h"
using namespace std;
int main(int argc, char **argv)
{
	userData * userinfo;
	ALLEGRO_DISPLAY * display;
	//pCallback pfun = input_check;
	if (parseCmdLine(argc, argv,&input_check,(void *) userinfo))
	{
		if(allegro_startup())
		{
			if ((display = al_create_display(display_width, display_height))!= NULL)
			{
				srand(time(NULL));
				//hacer main
				int ticks;
				if (userinfo->mode == 1)
				{
					simulation s;
						simulation::simulation();
						ticks = s.run();//falta definir las clases
						simulation::~simulation();
						
				}
				else if (userinfo->mode==2)
				{
					double tickmedio[MAX_BOTS];
					for (int i = 0; (i < MAX_BOTS) && (tickmedio[i] - tickmedio[i - 1] > 0.1); i++)
					{
						double sum = 0.0;
						for (int a = 0; i < 1000; ++i)
						{
							simulation s;
							simulation::simulation();
							sun += s.run;
							simulation::~simulation();
						}
					}
				}
				al_destroy_display(display);
				allegro_shut_down();

			}
			else
			{
				cout << "Couldnt start display" << endl;
				allegro_shut_down();
			}
		}
		else
		{
			cout << "Couldnt start allegro" << endl;
		}
	}
	else
	{
		cout << "input invalid" << endl;		//mensaje de error de parseo
	}
}
