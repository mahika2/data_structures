#include<iostream>
#define M 5
#define N 5
#define R 1
using namespace  std;
void f(int arr[M][N],int row,int col);

int main(void)
{

int m=M;
int n=N;
int arr[M][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};	
f(arr,0,0);
}
void f(int arr[M][N],int row,int col)
{
int  prev,curr;
int m=M;
int n=N;

  while(row<m && col<n)
  {
  if(row+1==m || col+1==n)
  break;
  prev=arr[row+1][col];
for(int j=col;j<n;j++)
{
curr=arr[row][j];
arr[row][j]=prev;
prev=curr;
}

for(int i=row+1;i<m;i++)
{
curr=arr[i][n-1];
arr[i][n-1]=prev;
prev=curr;
}

/*if(row<m)
{*/

for(int j=n-2;j>=col;j--)
{
curr=arr[m-1][j];
arr[m-1][j]=prev;
prev=curr;
}
//}

/*if(col<n)
{*/
for(int i=m-2;i>=row;i--)
{
curr=arr[i][col];
arr[i][col]=prev;
prev=curr;
}
//}   
col++;
row++;
m--;
n--;

}
for(int i=0;i<M;i++)
{
for(int j=0;j<N;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
}
