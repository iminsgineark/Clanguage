#include<stdio.h>
int main()
{
    int var1 = 0, var2 = 0;
    int* const ptr = &var1;
    printf("%d\n", *ptr);/// ?
    ptr = &var2; /// As ptr is constant
    var1 = 10;
    printf("%d\n", *ptr);
    return 0;
}
