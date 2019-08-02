#include <iostream>
#include<string.h>
using namespace std;
int palindrome(string s);
int main (int argc,char *argv[]) 
{
string s1;
s1=argv[1];
int r=palindrome(s1);
//cout<<r<<endl;
if(r==-1)
cout<<s1<<" string is not palindrome";
else
cout<<s1<<" string is  palindrome";
}
int palindrome(string s)
{
int i,j,flag=0;
int len=s.length();
for(i=0;i<len;i++)
{
if(s[i]!=s[len-i-1])
{
flag=1;
break;
}
}

if(flag==1)
return -1;
else 
return 1;
}

