#include<stdio.h>
#include<stdlib.h>
void pair(int arr[],int n,int sum);
void rotate(int arr[],int n,int r);
int main(int argc, char *argv[])
{
int n=0;
int arr[argc-3],i,j;
int sum;
for(i=1;i<argc-2;i++)
{
	arr[n]=atoi(argv[i]);
	n++;
}
int rotations=atoi(argv[argc-2]);
rotate(arr,n,rotations);

sum=atoi(argv[argc-1]);

pair(arr,n,sum);
}
void pair(int arr[],int n,int sum)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(sum==arr[i]+arr[j])
printf("pair is %d,%d\n",arr[i],arr[j]);
}
}
}
void rotate(int arr[],int n,int r)
{
	int i,j,temp;
	for(i=0;i<r;i++)
        {
                temp=arr[n-1];
                for(j=n;j>0;j--)
                {
                        arr[j]=arr[j-1];
                }
                arr[0]=temp;
        }
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
