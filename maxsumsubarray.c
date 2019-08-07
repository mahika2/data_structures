#include<stdio.h>
int max(int arr[],int n);
int main()
{
int n,i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int res=max(arr,n);
printf("max is: %d\n",res);
}
int max(int arr[],int n)
{
int i,j;
int max,sum,start=0,end=0;
max=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
for(i=0;i<n;i++)
{
sum=0;
sum=sum+arr[i];
for(j=i+1;j<n;j++)
{
sum=sum+arr[j];
if(sum>max)
{
//start=i;
max=sum;
//end=j;
}
}
}
//printf("%d\n %d\n",start,end);
//for(i=start;i<=end;i++)
//{
//printf("array is : %d\n",arr[i]);
//}
return max;
}
