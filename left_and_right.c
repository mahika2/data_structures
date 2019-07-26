#include<stdio.h>
#include<stdlib.h>
int median(int arr[],int n);
void rightrotate(int arr[],int m,int n,int r);
void leftrotate(int arr[],int m,int n,int r);
int main(int argc,char *argv[])
{
int n=0,m;
int arr[argc-2],i,j;

for(i=1;i<argc-1;i++)
{
arr[i]=atoi(argv[i]);
n++;
}
 m=median(arr,n);
printf("median is: %d\n",m);
int r;
r=atoi(argv[argc-1]);
rightrotate(arr,m,n,r);
leftrotate(arr,m,n,r);
printf("array is\n");
for(i=1;i<=n;i++)
{
printf("%d\n",arr[i]);
}
}
int median(int arr[],int n)
{
int med;
if(n%2==0)
{
med=(n+1)/2;
}
else
{
med=n/2;
}
return med;
}
void rightrotate(int arr[],int m,int n,int r)
{
int i,j,temp;
for(i=0;i<r;i++)
{
temp=arr[m];
for(j=m;j>0;j--)
{
arr[j]=arr[j-1];
}
arr[1]=temp;
}
}
void leftrotate(int arr[],int m,int n,int r)
{
int i,j,temp;
printf("m is%d",m);
for(i=0;i<r;i++)
{
temp=arr[m+1];
for(j=m+1;j<=n;j++)
{
arr[j]=arr[j+1];
}
arr[n]=temp;
}
}

	

