#include <stdio.h>

#define MAX(a,b) \
    printf(#a"and"#b "a##b=%d",a##b )

int main(void)
{
   MAX(1,2);
   return 0;
}
