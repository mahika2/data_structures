#include<stdio.h>
#include<stdlib.h>
void set(int arr[],int n);
int main(int argc,char *argv[])
{
	int arr[argc-1],i,n=0;
	for(i=1;i<argc;i++)
	{
		arr[i]=atoi(argv[i]);
		n++;
	}
	int count =1;
	for(i=1;i<=n;i++)
	{
	 if(arr[i]!=0)
	 {
		 arr[count++]=arr[i];
	 }
	}
	while(count<=n)
	{
	arr[count++]=0;
	}
	for(i=1;i<=n;i++)
        {
                printf("%d\n",arr[i]);
        }

	set(arr,n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void set(int arr[],int n)
{
	int zero,i;
	for(i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			zero=i;
		break;
		}
	}
	printf("start of zero at %d:\n ",zero);
	int sort,j;
	for(i=1;i<zero;i++)
	{
		for(j=i+1;j<zero;j++)
		{
                  if(arr[i]<arr[j])
		  {
			  sort=arr[j];
			  arr[j]=arr[i];
			  arr[i]=sort;
		  }
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
	int neg;
	for(i=1;i<=n;i++)
	{
		if(arr[i]<0)
		{
			neg=i;
			break;
		}
	}
	printf("neg start: %d \n",neg);
	int temp,start=2;
	{
		while(neg<zero)
		{
	      temp=arr[neg];
	      arr[neg]=arr[start];
	      arr[start]=temp;
	      start=start+2;
	      neg++;
		}
	}
}
