#include "stdio.h"
#include "stdlib.h"
#include "string.h"


/*char *getmem(void)
{
	char *p =(char*)malloc(100);
	return p;
}*/

void main()
{
	char *str=(char*)malloc(100);
	//str=getmem();
	strcpy(str,"hello word");
	free(str);
	if(str != NULL)
	{
	 	strcpy(str, "word");
		printf("%s",str);
	}
	//printf("%c\n",str[0]);
	//free(str);
}
