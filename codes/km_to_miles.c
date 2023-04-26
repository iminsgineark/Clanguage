/*convert kilometers into miles*/

#include<stdio.h>
int main()
{
    float km,mile;

    /*km = kilometer & mile=miles*/

    printf("Enter the length in km=");
    scanf("%f",&km);

    mile=km/1.6;
    printf("The result in mile=%f",mile);

    return 0;

}
