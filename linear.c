#include<stdio.h>
int main()
{
int n;
scanf("%d",n);
int arr[n],search,i,index;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(arr[i]==search)
{
index=i;
printf("%d",index);
}
}
}
