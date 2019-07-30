#include<stdio.h>
#include<stdlib.h>
int f(int arr[],int n);
int main(int argc, char *argv[])
{
int n=0,i;
int arr[argc-1];
for(i=1;i<argc;i++)
{
	arr[n]=atoi(argv[i]);
	n++;
}
int res=f(arr,n);
printf("Min element is :%d",res);
}
int f(int arr[],int n)
{
int min,i;
for(i=1;i<n;i++)
{
if(arr[i-1]>arr[i])
{
min=arr[i];
break;
}
}
//printf("%d",min);
return min;
}

