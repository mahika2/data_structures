#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i,arr[argc-1];
for( i=1;i<argc;i++)
{
	arr[i]=atoi(argv[i]);
}
int *ptr;
ptr=&arr[argc-1];
for(i=argc-1;i>0;i--)
{
	printf("%d\n",*ptr);
	ptr--;
}
}
