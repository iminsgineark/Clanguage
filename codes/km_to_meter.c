/*To convert Km into meters*/

#include<stdio.h>
int main()
{
    float km,m;

    printf("Enter the length in km=");
    scanf("%f",&km);

    m=km*1000.0;
    printf("The length in m=%f",km);

    return 0;


}
