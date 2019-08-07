#include <iostream>
#include<string.h>
using namespace std;
void uppercase(char s[]);
int main(int argc, char *argv[])
{
char *str=argv[argc-1];
//int len=strlen(*str);
uppercase(str);
}
void uppercase(char s[])
{
	int len=strlen(s);
int i=0,j=0,k;
cout<<len<<endl;
char temp[100];
for(i=0;i<len;i++)
{
if(s[i]>='A'&& s[i]<='Z')
{
temp[j]=s[i];
s[i]=' ';
j++;
   }
}
temp[j]='\0';
for(i=0;i<len;i++)
{
if(s[i]==' ' && s[i+1]!=' ')
{
s[i]=s[i+1];
s[i+1]=' ';
i=i-2;
}
}
cout<<strcat(s,temp);
}


