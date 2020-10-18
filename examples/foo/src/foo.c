#include <string.h>
#include "foo.h"

int foo(int a,int b){
	return a-b-1;
}

int payment(float value, char status[20])
{
	//char estApo[] = {'e','s','t','u','d','a','n','t','e','/','a','p','o','s','e','n','t','a','d','o'};
	//char regular[] = {'r','e','g','u','l','a','r'};
	//char vip[] = {'v','i','p'};

	if(value<=0 || value>99999)
		return 1;

	//If value a string
	if(value==(char)value)
        return 2;
	
	if(strlen(status)>20)
		return strlen(status);
	
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