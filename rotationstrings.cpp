#include <iostream>
#include<string.h>
using namespace std;
void removechars(char s[],char s1[]);
int main(int argc, char *argv[])
{

char *str=argv[argc-2];
char *str1=argv[argc-1];
removechars(str,str1);
}
void removechars(char s[],char s1[])
{
int l=strlen(s);
int l1=strlen(s1);
int i,j,count=0,flag=0;
cout<<l<<endl<<l1<<endl;
if(l!=l1)
{
cout<<"lengths are different";
}
else
{
for(i=0;i<l;i++)
{
//count=0;
char temp=s[l-1];
for(j=l-1;j>=0;j--)
{
s[j]=s[j-1];

   }
   s[0]=temp;
   s[l]='\0';
   
   
   	
   	if(s[j]==s1[j])
   	
   	{	
   	flag=-1;
   	
   	break;
}
else 
continue;
   	
    
cout<<count<<endl;
    
  
}
 if(flag==-1)
    {
    //cout<<flag;
    cout<<"Yes,they are rotation of each other";
}
else
{
cout<<"No,they are not rotation of each other";
} 
}
}




