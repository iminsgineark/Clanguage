#include<stdio.h>
int main()
{
int a[100],i,n,pos,index,value;
printf("how many no to store in array\n");
scanf("%d",&n); ///n = 5
printf("enter the number\n");
for(i=0;i<=n-1;i++)
{scanf("%d",&a[i]);
}///10,20,30,40,50, 60
printf("enter position and value to be inserted");
scanf("%d%d",&pos,&value);///pos = 4 v =40
index=pos-1; ///3
///for(i=4;i>=3;i--)
for(i=n-1;i>=index;i--)
{
a[i+1]=a[i]; ///a[4] = 50;
}
a[index]=value;///a[3] = 40
printf("contents of the array\n");
for(i=0;i<=n;i++)
{ printf("%d",a[i]);
printf("\n");
}
return 0;
}
