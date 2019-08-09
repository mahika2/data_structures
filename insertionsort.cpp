#include<iostream>
using namespace std;
void sort(int arr[],int n);
int main()
{
int n; 
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
void sort(int arr[],int n)
{ 
int k;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
k=j;
int temp=arr[k];
while(k>i)
{
arr[k]=arr[k-1];
k--;
}
arr[i]=temp;
}
}
}

}

