#include<stdio.h>
#include<string.h>
int main()
{
	char str[15]="hello world";
	char str1[]="hello world";
	char str2[]={'h','e','l','l','o','w','o','r','l','d','\0'};
	char str4[15];
	strcpy(str4,str2);
	printf("%s\n",str);
	puts(str1);
	puts(str2);
	const char *str3="hello world";
	puts(str3);
	puts(str4);
	printf("%x\n",&str4);
	printf("%x\n",&str2);
	int size=strlen(str2);
	printf("%d",size);
}

