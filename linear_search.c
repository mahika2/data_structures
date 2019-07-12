#include<stdio.h>
int main()
{
int array[10],no,i,index;
for(int i=0;i<10;i++)
{
scanf("%d",&array[i]);
}
scanf("%d",&no);
for(int i=0;i<10;i++)
{
if(array[i]==no)
{
index=i;
}
}
printf("%d",index);
}


