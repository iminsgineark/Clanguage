#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number you want multiplication of:\n");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,(i*num));
    }

    return 0;
}
