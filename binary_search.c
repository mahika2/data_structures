#include<stdio.h>
int main()
{
int n,first,second,middle;
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
int search;
printf("enter search");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(array[middle]<search)

first=middle+1;

else if(array[middle]=search)
{
printf("%d found at loc %d",search,middle);
break;
}
else
{
last=middle-1;
}
middle=(first+last)/2;
}

}
