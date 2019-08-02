#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int m,n;
	m=atoi(argv[argc-2]);
	n=atoi(argv[argc-1]);
	int i,j;
	int arr[m][n];
	int k=1;
	for(i=1;i<=m;i++)
	{
         for(j=1;j<=n;j++)
	 {
		 arr[i][j]=atoi(argv[k]);
		k++;
	 }
	}
	
	 for(i=1;i<=m;i++)
        {
         for(j=1;j<=n;j++)
         {
                 printf("%d",*(*(arr+i)+j));

         }
	 printf("\n");
        }
}



