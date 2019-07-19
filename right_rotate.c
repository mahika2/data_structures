#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	/*int m;
	scanf("%d",&m);*/
	int arr[argc-1],i,k,n,j=0;
	for(i=1;i<argc;i++)
	{
	arr[i]=atoi(argv[i]);
	j++;
/*	scanf("%d",&arr[i]);*/
	}
	scanf("%d",&k);
	int temp;
	for(i=0;i<k;i++)
	{ 
		temp=arr[j-1];
		for(n=j;n>0;n--)
		{
			arr[n]=arr[n-1];
		}
		arr[1]=temp;
	}
	for(i=1;i<j;i++)
	{
		printf("%d\n",arr[i]);
	
	
}
}

