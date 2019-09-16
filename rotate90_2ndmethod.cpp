#include<iostream>
#include<stdlib.h>
using namespace std;
void rotate90degree(int **arr,int M,int N)
{
int i,j;
for(i=0;i<N/2;i++)
{
for(j=i;j<N-i-1;j++)
{
int temp=arr[i][j];
arr[i][j]=arr[j][N-1-i];
arr[j][N-1-i]=arr[N-1-i][N-1-j];
arr[N-1-i][N-1-j]=arr[N-1-j][i];
arr[N-1-j][i]=temp;
}
}
}
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
rotate90degree(arr,m,n);
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
}
