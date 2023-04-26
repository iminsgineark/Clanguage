/*To convert meters into inches*/
#include<stdio.h>
int main()
{
    float inc,m;
    /*here inc=inches & m=meters*/
    printf("Enter the length in m=");
    scanf("%f",&m);

    inc=m*39.67;
    printf("The result of inc=%f",inc);
     return 0;

}
