/*to convert inches to meters*/

#include<stdio.h>
int  main()
{
    float inc,m;

    /*here inc=inches & m=meters*/

    printf("Enter the length in inc=");
    scanf("%f",&inc);

    m=inc*0.0254;
    printf("The result of met=%f",m);

    return 0;


}
