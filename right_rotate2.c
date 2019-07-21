
#include<stdio.h>
#include<stdlib.h>
void func(int arr[],int n,int r);
int main(int argc, char *argv[])
{
	int arr[argc-2],i,j=0;
	for(i=1;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i]);
		j++;
	}
    int r=atoi(argv[argc-1]);
	func(arr,j,r);
}
void func(int arr[],int n,int r)
{
	int temp[r],i,size;
	size=n;
	int x=n;
	for(i=1;i<=r;i++)
	{
		temp[i]=arr[size-r+i];
		
	}
	int j=n-r;

		for(i=1;i<=j;i++)
		{
		arr[x]=arr[x-r];
		x--;
		}
	
	for(i=1;i<=r;i++)
	{
		arr[i]=temp[i];
	}
	for(i=1;i<=n;i++)
		
	{
		printf("%d\n",arr[i]);
	}
}
