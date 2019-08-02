#include <iostream>
#include<string.h>
using namespace std;
int main () 
{
string s1,s2;
cin>>s1;
cin>>s2;
string s3="";
s3=s1;
s1=s2;
s2=s3;
cout<<s1<<endl;
cout<<s2<<endl;

}
