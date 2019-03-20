#include <stdio.h>

void mymin(char **w,int n);
void main()
{
  char *p[4];
  int i=0;
  p[0]="ab";
  p[1]="a";
  p[2]="abc";
  p[3]="abcd";
  printf("before:\n");
  for(i=0;i<4;i++)
   printf("p[%d]->%s\n",i,p[i]);
  printf("\n");
  mymin(p,4);
  printf("after:\n");
  for(i=0;i<4;i++)
   printf("p[%d]->%s\n",i,p[i]);
  printf("\n");
}
void mymin(char **w,int n)
{
  int i=0,k=0;
  char *temp;

  for(i=0;i<4;i++)
  if(strcmp(w[i],w[k])<0)
{ k=i;
   temp=w[0];w[0]=w[k];w[k]=temp;} 


