#include<iostream>
using namespace std;
int main()
{
int n,k; 
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
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
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}

