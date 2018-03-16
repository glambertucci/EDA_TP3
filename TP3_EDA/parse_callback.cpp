#include "parse_callback.h"
#include <string.h>
#include <ctype.h>
#include "parsecmd.h"
#include <stdlib.h>
#include "defines.h"

int input_check(char *key , char*value , void *data_in) 
{
	int error = 1;
	strToCapital(key);
	strToCapital(value);
	userData * data;
	data = (userData *)data_in;
	if (key != NULL)
	{
		if (strcmp(key, "WIDHT"))
		{
			if (atof(value) < 70)
			{
				data->width = atof(value);
			}
			else
			{
				error = ERROR3;
			}
		}
		else if (strcmp(key, "HEIGHT"))
		{
			if (atof(value) < 100)
			{
				data->height = atof(value);
			}
			else
			{
				error = ERROR3;
			}
		}
		else if (strcmp(key, "NBOTS"))
		{
			if (atof(value) < MAX_BOTS)
			{
				data->bots_num = atof(value);
			}
			else
			{
				error = ERROR3;
			}
		}
		else if (strcmp(key, "MODE"))
		{
			if (atof(value) < 3 && atof(value) > 0)
			{
				data->mode = atof(value);
			}
			else
			{
				error = ERROR3;
			}
		}
		else
			error = ERROR3;

	}
	else
		error = ERROR3;
	return error;
}

void strToCapital(char * str)
{

	int i = 0;

	while (str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}

}


void mystrcp(char* destination, const  char* source)
{
	int i = 0;
	while (source[i])
	{
		destination[i] = source[i++];
	}
}