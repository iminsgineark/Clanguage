/* to convert inches to feet*/

#include<stdio.h>
int main()
{
    float inches,feet;

    printf("Enter the length in inches=");
    scanf("%f",&inches);

    feet=inches*12;
    printf("The result of feet=%f",feet);

    return 0;


}
