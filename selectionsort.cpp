#include<iostream>
using namespace std;
void swap(int *i,int *j);
void m(int arr[],int n);

int main(int argc, char *argv[])
{
int n; 
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
m(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}

void m(int arr[],int n)
{

for(int i=0;i<n;i++)
{

for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[i])
{
int min=i;
swap(&arr[min],&arr[j]);
}
}
}
}

void swap(int *i,int *j)
{
int temp=*i;
*i=*j;
*j=temp;
}

