#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int *arr=(int *)malloc(m*n*sizeof(int));
	int count=1;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
       *(arr+i*n+j)=count++;
	}
	}
	 for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
	printf("%d",*(arr+i*n+j));
	}
	printf("\n");
	}
}
