#include "string.h"

int payment(float value, char status[20])
{
	if(value<=0)
		return 1;
	
	if(strlen(status)>20)
		return 2;
	
	if (strcmp(name, "regular")==0) 
	{
		return 0;
	}
	else if (strcmp(name, "estudante/aposentado")==0) 
	{
		return 0;
	}
	else if (strcmp(name, "VIP")==0) 
	{
		return 0;
	}
	else  
	{
		return 2;
	}
}