
#include "foo.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int foo(int a,int b){
	return a-b-1;
}

int payment(float value, char status[20])
{
	if(value<=0)
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
