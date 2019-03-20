#include "stdio.h"
#include "stdlib.h"
#include "string.h"


char *getmem(void)
{
       	static  char p[]="hello word";
	return p;
}

void main()
{
        char *str=NULL;
        str=getmem();
        printf("%s",str);
}
