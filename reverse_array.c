#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[],int n);
int main(int argc,char *argv[])
{
 int arr[argc-1],i,j=0;
 for(i=1;i<argc;i++)
 {
	 arr[i]=atoi(argv[i]);
	
 }

   reverse(arr,argc-1);
 /*  for(j=0;j<=argc-1;j++)
   {
	   printf("%d",arr[j]);
	   }*/
   return 0;
}
void reverse(int arr[],int n)
{
	int j, temp;
	if(n==0)
		return;
	else
	
		printf("%d\n",arr[n]);
		reverse(arr,n-1);

}
