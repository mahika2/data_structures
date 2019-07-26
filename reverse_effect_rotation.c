#include<stdio.h>
#include<stdlib.h>
int count(int arr[],int n);
void reverseeffect(int arr[],int noofrotations,int n);
int main(int argc, char *argv[])
{
int n=0;
//scanf("%d",&n);
int arr[argc-1],i,j;

for(i=1;i<argc;i++)
{
arr[i]=atoi(argv[i]);
n++;
}
int noofrotations=count(arr,n);
reverseeffect(arr,noofrotations,n);
for(i=1;i<=n;i++)
{
printf("%d\n",arr[i]);
}
}
int count(int arr[],int n)
{
int min=arr[1],index,i;
for(i=1;i<=n;i++)
{
if(min>arr[i])
{
min=arr[i];
index=i;
}
}
printf("%d\n",index);// agar 2 bar right rotate kra hai...to vo array n-2 times left rotate krke b bn skta hai
return index;
}
void reverseeffect(int arr[],int index,int n)
{
int i,j,temp;
for(j=1;j<index;j++)
{
temp=arr[1];
for(i=1;i<=n;i++)
{
arr[i]=arr[i+1];
}
arr[n]=temp;

}

}


