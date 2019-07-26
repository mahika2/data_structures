#include<stdio.h>
#include<stdlib.h>
void gcd(int arr[],int s,int n);
int main(int argc,char *argv[])
{
/*	int n;
	scanf("%d",&n);*/
	int arr[argc-1],i,n=0;
	for(i=1;i<argc;i++)
	{
		arr[i]=atoi(argv[i]);
		n++;
	}
	int s=1;
	gcd(arr,s,n);
}
void gcd(int arr[],int s,int n)
{
	int i,hcf,lcm,mul=1;

	while(s!=n)
	{
         for(i=1;i<=arr[s] && i<=arr[s+1];i++)
	 {
		 if(arr[s]%i==0 && arr[s+1]%i==0)
		 {
			 hcf=i;
	 }
	 }
	 arr[s+1]=hcf;
	 s++;
	}
	printf("gcd is: %d\n",hcf);

}
