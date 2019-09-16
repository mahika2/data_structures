#include<iostream>
using namespace std;
void transpose(int **arr,int m,int n);
void swap(int *i,int *j);
int main()
{
int m,n;
cin>>m>>n;
int **arr=new int*();
for(int i=0;i<m;i++)
{
arr[i]=new int();
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}
int r;
cin>>r;
for(int i=0;i<r;i++)
{
transpose(arr,m,n);
}
cout<<"Rotated array is:"<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
void transpose(int **arr,int m,int n)
{
for(int i=0;i<m;i++)
{
for(int j=0;j<i;j++)
{
int temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp;
}
}
cout<<"Transpose is :"<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
for(int i=0;i<n;i++)
{
int start=0;
int end=n-1;
while(start<end)
{
swap(&arr[i][start],&arr[i][end]);
start++;
end--;
}
}
}
void swap(int *i,int *j)
{
int temp=*i;
*i=*j;
*j=temp;
}
