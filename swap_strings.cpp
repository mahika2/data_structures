#include <iostream>
#include<string.h>
using namespace std;
void swap(string s1,string s2);
int main (int argc,char*argv[]) 
{
string s1,s2;
s1=argv[argc-2];
s2=argv[argc-1];
cout<<"before swap: "<<endl;
cout<<"s1 : "<<s1<<endl;
cout<<"s2 : "<<s2<<endl;
swap(s1,s2);
}
void swap(string s1,string s2)
{
string s3="";
s3=s1;
s1=s2;
s2=s3;
cout<<"After swap : "<<endl;
cout<<"s1: "<<s1<<endl;
cout<<"s2: "<<s2<<endl;

}
