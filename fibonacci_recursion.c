#include<stdio.h>
#include<stdlib.h>
void func(int n1,int n2,int n);
int main(int argc,char *argv[])
{
        int n=atoi(argv[argc-1]);
    int	n1=0;
    int	n2=1;
        printf("%d\t %d\t",n1,n2);
         func(n1,n2,n-2);
}
void func(int n1,int n2,int n)
{
        int n3;
     if(n>0)
     {
	     n3=n1+n2;
                printf("%d\t",n3);
		n1=n2;
		n2=n3;
           func(n1,n2,n-1);
     }
              
       
}

