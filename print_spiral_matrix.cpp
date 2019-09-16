#include<iostream>
using namespace std;
void spiral(int **arr,int m,int n);
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
spiral(arr,m,n);

}
void spiral(int **arr,int m,int n)
{
int row=0,col=0;
int M=m;
int N=n;
  while(row<m && col<n)
  {
  if(row+1==m || col+1==n)
  break;
  
for(int j=col;j<n;j++)
{
cout<<arr[row][j]<<"  ";
}

for(int i=row+1;i<m;i++)
{
cout<<arr[i][n-1]<<"  ";
}

/*if(row<m)
{*/

for(int j=n-2;j>=col;j--)
{
cout<<arr[m-1][j]<<"  ";
}
//}

/*if(col<n)
{*/
for(int i=m-2;i>row;i--)
{
cout<<arr[i][col]<<"  ";
}
//}   
col++;
row++;
m--;
n--;

}


}

