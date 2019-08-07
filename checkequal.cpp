#include <iostream>
#include<string.h>
using namespace std;
int compare(string str,string str1);
int main(int argc,char *argv[])
{
string str,str1;
str=argv[argc-2];
str1=argv[argc-1];
int result=compare(str,str1);
if(result==1)
	cout<<"Strings are same";
else
	cout<<"Strings are not same";
}
int compare(string str,string str1)
{
int i=0,count=0;
int len=str.length();
int len2=str1.length();
if(len!=len2)
//return -1;
cout<<"Not same:Length of strings is different";
else 
{
while(str[i]!='\0' && str1[i]!='\0')
{
if(str[i]==str1[i]-32 || str[i]-32==str1[i]|| str[i]==str1[i])
count++;
i++;
}
if(count==len && count==len2)
{
return 1;
//cout<<" Strings are Same";
}
else 
return -1;
//cout<<"Strings are Not Same";
}
}

