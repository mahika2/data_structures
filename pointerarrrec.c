#include<stdio.h>
#include<stdlib.h>
void reverse(int *ptr,int n);
int main(int argc,char *argv[])
{
	int arr[argc-1],i;
	for(i=1;i<argc;i++)
	{
		arr[i]=atoi(argv[i]);
	}
	int *ptr;
	ptr=&arr[argc-1];
	reverse(ptr,argc-1);
}
void reverse(int *ptr,int n)
{
	if(n==0)
       return;
	else
	printf("%d\n",*ptr);
	reverse(ptr-1,n-1);
}
