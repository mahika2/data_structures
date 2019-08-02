#include <iostream>
#include<string.h>
using namespace std;
void reverse(string str);
int main(int argc,char *argv[])
{
string str;
//char str[100];
//getline(cin,str);
//cin.getline(str,100);
str=argv[argc-1];
reverse(str);
}
void reverse(string str)
{
int i,j=0;
int len=str.length();
cout<<len<<endl;
for(i=len-1;i>=0;i--)
{
cout<<str[i];
}

}
