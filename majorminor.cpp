#include<iostream>
using namespace std;
void diagonalswap(int **arr,int m,int n);
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
cout<<"before swapping:"<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
diagonalswap(arr,m,n);
cout<<"after swapping:"<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
void diagonalswap(int **arr,int m,int n)
{
for(int i=0;i<m;i++)
{

int temp=arr[i][i];
arr[i][i]=arr[i][m-i-1];
arr[i][m-i-1]=temp;

}


}

