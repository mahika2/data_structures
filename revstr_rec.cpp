#include <iostream>
#include<string.h>
using namespace std;
void reverse(char str[],int len);
int main()
{
char str[100];
cin>>str;
int len=strlen(str);
cout<<len;
reverse(str,len);
}
void reverse(char str[],int len)
{
if(len>=0)
{
cout<<str[len];
reverse(str,len-1);	
}
}

