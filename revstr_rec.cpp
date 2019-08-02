#include <iostream>
#include<string.h>
using namespace std;
void reverse(string str,int len);
int main(int argc, char *argv[])
{
string s;
s=argv[argc-1];
int len=s.length();
cout<<len<<endl;
reverse(s,len);
}
void reverse(string str,int len)
{
if(len>=0)
{
cout<<str[len];
reverse(str,len-1);	
}
}

