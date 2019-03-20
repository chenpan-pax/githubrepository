
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>
 
int main()
{
        int rc;
        rc = syscall(15, "/dev/block", 0111);
 
        if (rc == -1)
                printf( "chenp chmod failed, \n");
        else
                printf("chenp chmod succeess!\n");
        return 0;
}
