#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[],int j,int r);
int main(int argc,char *argv[])
{
/*printf("%d",argc);*/
int arr[argc-2],i,j=0;
for(i=1;i<argc-1;i++)
{
arr[i]=atoi(argv[i]);
j++;
}
printf("no of elements in array: ");
printf("%d\n",j);
int r;
r=atoi(argv[argc-1]);
printf("no of rotations are: ");
printf("%d\n",r);
rotate(arr,j,r);
printf("array after rotation: \n");
for(i=1;i<=j;i++)
{
printf("%d\n",arr[i]);
}
}
void rotate(int arr[],int j,int r)
{
int i;
if(r!=0)
{
int temp=arr[j];
for(i=j;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[1]=temp;
rotate(arr,j,r-1);
}
}

