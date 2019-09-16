#include<iostream>
using namespace std;
void transpose(int **arr,int m,int n);
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
transpose(arr,m,n);
}
void transpose(int **arr,int m,int n)
{

int k=0, row=0,col=0,max;
int sum[m-1];
  while(row<m && col<n)
  {
  if(row+1==m || col+1==n)
  break;
  
  
  sum[k]=0;
for(int j=col;j<n;j++)
{
sum[k]=sum[k]+arr[row][j];
}

for(int i=row+1;i<m;i++)
{
sum[k]=sum[k]+arr[i][n-1];
}



for(int j=n-2;j>=col;j--)
{
sum[k]=sum[k]+arr[m-1][j];
}

for(int i=m-2;i>row;i--)
{
sum[k]=sum[k]+arr[i][col];
}

cout<<sum[k]<<endl;
k++;
col++;
row++;
m--;
n--;

}
       int index;
       max=sum[0];
      for(int i=0;i<k;i++)
     {
if(max<sum[i])
max=sum[i];
index=i;
      }
     cout<<"ring no: "<<index<<endl;
     cout<<"max sum is: "<<max<<endl;


}
