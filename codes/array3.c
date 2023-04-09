#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("Enter the numbers\n");
    scanf("%d", &n);
    printf("Enter the array elements");

    for(i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    printf("Sum of array elements is %d",sum);

    return 0;





}
