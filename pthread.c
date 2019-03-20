#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
 
 
 
void *tfn(void *arg)
{
 
    while (1) {
      
 
        printf("hello ");
        sleep(1);	/*模拟长时间操作共享资源，导致cpu易主，产生与时间有关的错误*/
        printf("world\n");
        sleep(1);//睡眠，释放cpu
    }
 
    return NULL;
}
 
int main(void)
{
   
    pthread_t tid;
    
  
 
    pthread_create(&tid, NULL, tfn, NULL);
    while (1) 
	{
  
        printf("HELLO ");
        sleep(1);
        printf("WORLD\n");      
        sleep(1);
    }
   
 
 
    return 0;
}
 
/*线程之间共享资源stdout*/

