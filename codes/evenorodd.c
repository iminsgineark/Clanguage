#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if(num%2==0)
        printf("The no.is even");
    else
    {
        printf("The no.is odd");
    }
    return 0;
}
