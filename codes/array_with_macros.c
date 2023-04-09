#include<stdio.h>
#define k 5

int main()
{

    int a[k],i;
    for(i=0;i<k;i++)
    {
        printf("Enter the values for index %d: \n",i);
        scanf("%d", &a[i]);
    }
    printf("\n entered values are ass follows \n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
