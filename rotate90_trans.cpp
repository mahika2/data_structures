#include<iostream>
using namespace std;
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
for(int i=0;i<m;i++)
{
for(int j=0;j<i;j++)
{
int temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp;
}
}
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
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
void swap(int *i,int *j)
{
int temp=*i;
*i=*j;
*j=temp;
}

