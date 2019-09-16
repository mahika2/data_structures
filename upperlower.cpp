#include<iostream>
using namespace std;
int main(void)
{
int m,n;
cin>>m>>n;
int mat[m][n];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
cout<<"Lower matrix: "<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(j>i)
{
cout<<" "<<" ";
}
else
{
cout<<mat[i][j]<<" ";
}


}
cout<<endl;
}
cout<<endl;
cout<<"Upper matrix: "<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(j<i)
{
cout<<" "<<" ";
}
else
{
cout<<mat[i][j]<<" ";
}
}
cout<<endl;
}
}
