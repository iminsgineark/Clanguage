#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the n number of elements\n");
    scanf("%d", &n);
    printf("\n enter the array elements");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered array elements are");

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;

}
