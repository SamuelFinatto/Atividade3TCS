#include "string.h"

int payment(float value, char status[20])
{
	if(value<=0)
		return 1;

	if(value!=(float))
		return 1;
	
	if(strlen(status)>20)
		return 2;
	
	if (strcmp(status, "regular")==0) 
	{
		return 0;
	}
	else if (strcmp(status, "estudante/aposentado")==0) 
	{
		return 0;
	}
	else if (strcmp(status, "VIP")==0) 
	{
		return 0;
	}
	else  
	{
		return 2;
	}
}