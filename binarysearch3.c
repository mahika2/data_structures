#include<stdio.h>
#include<stdlib.h>
int pivoted_binary_search(int arr[],int n,int search);
int binary_search(int arr[],int low,int high,int search);
int main(int argc,char *argv[])
{
int n=0;
//scanf("%d",&n);
int arr[argc-2],i;
for(i=1;i<argc-1;i++)
{
arr[n]=atoi(argv[i]);
n++;
}
int search;
search=atoi(argv[argc-1]);
int result=pivoted_binary_search(arr,n,search);
if(result==-1)
printf("%d not found",search);
else
printf("%d found at %d",search,result);
}
int pivoted_binary_search(int arr[],int n,int search)
{
int high,low;
high=n-1;
low=0;
int res;
res=binary_search(arr,low,high,search);
return res;
}
int binary_search(int arr[],int low,int high,int search)
{

if(low>high)
return -1;
int mid=low+(high-low)/2;
if(arr[mid]==search)
return mid;
if(arr[low]<=arr[mid])
{
if(search>=arr[low] && search<=arr[mid])
return binary_search(arr,low,mid-1,search);
else
return binary_search(arr,mid+1,high,search);

}
if(search>=arr[mid+1] && search<=arr[high])
return binary_search(arr,mid+1,high,search);
else
return binary_search(arr,low,mid-1,search);
}

	

