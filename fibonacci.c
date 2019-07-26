#include<stdio.h>
#include<stdlib.h>
void func(int n);
int main(int argc,char *argv[])
{
	int n=atoi(argv[argc-1]);
	 func(n);
}
void func(int n)
{
	int n1=0,n2=1,n3;
	printf("%d\t %d\t",n1,n2);
	int i;
	for(i=0;i<n;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}
