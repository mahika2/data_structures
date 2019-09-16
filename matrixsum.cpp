#include<iostream>
#define M 4
#define N 4
#define R 1
using namespace  std;
int main(void)
{

int m=M;
int n=N;
int sum[m];
int arr[M][N]={{1,2,3,4},{6,7,8,9},{11,12,13,14},{16,17,18,19}};	
int k=0, row=0,col=0,max;

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

return 0;
}

