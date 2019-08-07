#include<stdio.h>
int f(int arr[],int n);
int main()
{
int n,i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

int res=f(arr,n);
printf("sum is: %d\n",res);
}
int f(int arr[],int n)
{
int max1=0,max=0,start=0,end=0,i=0;
for(i=0;i<n;i++)
{
max=max+arr[i];
if(max<0)
{
max=0;
start=i+1;	
}
else if(max1<max)
{
max1=max;
end=i;
}
}
printf("%d %d\n",start,end);
return max1;

}

