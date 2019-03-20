#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdio.h>
 
int main()
{
        int rc;
 
        rc = chmod("/dev/block", 0221);
        if (rc == -1)
                printf( "chmod failed\n");
        else
                printf("chmod success!\n");
        return 0;
}

