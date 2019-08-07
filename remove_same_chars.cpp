#include <iostream>
#include<string.h>
using namespace std;
void removechars(string s,string s1);
int main(int argc,char *argv[])
{
string str,str1;
str=argv[argc-2];
str1=argv[argc-1];
//cin>>str;
//cin>>str1;
//int len=strlen(str);
removechars(str,str1);
}
void removechars( string s,string s1)
{
int i,j,k=0;
for(i=0;s[i]!='\0';i++)
{
for(j=0;s1[j]!='\0';j++)
{
if(s[i]==s1[j] )
{ 
s[i]=' ';
   }
    }
}
int n=s.length();
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

