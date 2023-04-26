/*convert miles into kilometer*/

#include<stdio.h>
int main()
{
    /*Here km=kilometers* & mile=Miles*/

    float mile,km;
    printf("Enter the length in mile=");
    scanf("%f",&mile);

    km=mile*1.69;
    printf("The length in km=%f",km);

    return 0;
}
