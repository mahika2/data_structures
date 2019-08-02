#include <iostream>
#include<string.h>
using namespace std;
void duplicate(string s,int n);
int main(int argc, char *argv[])
{
string str;
str=argv[argc-1];
int len=str.length();
duplicate(str,len);
}
void duplicate(string s,int n)
{
int i,j,k=0;
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
{
if(s[i]==s[j] )
{ 
s[j]=' ';
   }
    }
}
for(i=0;i<n;i++)
{
if(s[i]==' ' && s[i+1]!=' ')
{
s[i]=s[i+1];
s[i+1]=' ';
i=i-2;
}
}
for(i=0;i<n;i++)
cout<<s[i];
}

