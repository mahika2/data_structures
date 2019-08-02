#include <iostream>
#include<string.h>
using namespace std;
void compare(char str[],char str1[]);
int main()
{
char str[100],str1[100];
cin>>str;
cin>>str1;
compare(str,str1);
}
void compare(char str[],char str1[])
{
int i=0,count=0;
int len=strlen(str);
int len2=strlen(str1);
if(len!=len2)
//return -1;
cout<<"Not same:Length of strings is different";
else 
{
while(str[i]!='\0' && str1[i]!='\0')
{
if(str[i]==str1[i]-32 || str[i]-32==str1[i])
count++;
i++;
}
if(count==len && count==len2)
{
//return 1;
cout<<" Same";
}
else 

cout<<"Not Same";
}
}

