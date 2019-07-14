#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int arr[argc];
	int i;
	for(i=1;i<=argc-1;i++)
	{
		arr[i]=atoi(argv[i]);
	}
	for(i=argc-1;i>0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
