#include <stdio.h>

int main()
{
    int arr[10] = { 0 };
    int i, x,y, pos, n = 10,num1,num2;

    printf("Enter Num 1 and Num 2\n");
    scanf("%d%d", &num1,&num2);

    for (i = 0; i < 10; i++)
        arr[i] = i + 1;


    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");


    x = num1;
    pos = 3;

    y=num2;
    pos=7;

    n++;


    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
