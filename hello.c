#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h> 
#include <fcntl.h> // for open
#include <unistd.h> // for close
#include <stdio.h>
#include <fcntl.h> // open function
#include <unistd.h> // close function


#define DEVICE_NAME "/dev/chmod"
int main(int argc, char** argv)
{
 int fd = -1;
int  val = 0;
 fd = open(DEVICE_NAME, O_RDWR);
 if(fd == -1) {
 printf("Failed to open device %s \n", DEVICE_NAME);
 return -1;
 }

 printf("Read original value: \n");
 read(fd, &val, sizeof(val));
 printf("%d \n", val);
 val = 434;
 printf("Write value %d to %s \n", val, DEVICE_NAME);
 write(fd, &val, sizeof(val));


 printf("Read the value again: \n");
 read(fd, &val, sizeof(val));
 printf("%d \n", val);
 close(fd);
 return 0;
}
