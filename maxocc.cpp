#include <iostream>
#include<string.h>
using namespace std;
void count(string s,int n);
int main(int argc,char *argv[])
{
string str;
//cin>>str;
str=argv[argc-1];
int len=str.length();
count(str,len);
}
void count(string s,int n)
{
int freq[n],count[n],i,j;
for(i=0;i<n;i++)
{
freq[i]=0;
count[i]=1;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j] && freq[j]==0)
{
count[i]++;
freq[j]=-1;
}
}
}
int	max=count[0],index;
for(i=0;i<n;i++)
{
if(freq[i]!=-1)
{
if(count[i]>max)
{
max=count[i];
index=i;
}
}
}
cout<<"Maximum occuring element is: "<<s[index]<<endl;
cout<<"no of time its occuring: "<<max;

}
