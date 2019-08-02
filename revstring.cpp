#include <iostream>
#include<string.h>
using namespace std;
void reverse(string str);
int main(int argc, char *argv[])
{
string str;
//char str[100];
//getline(cin,str);
str=argv[argc-1];
reverse(str);
}
void reverse(string str)
{
int i,j=0;
int len=str.length();
cout<<len<<endl;
char rev[100];
for(i=len;i>=0;i--)
{
//rev[j]=str[i];
cout<<str[i];
}
}
