/*#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    a=pow(9,13);
    printf("%d", a);

    return 0;
}*/
/* to calculate the aggregate marks and percentage  marks obtained by students*/

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("Enter the marks scored by students out of 100\n");
    scanf("%d %d %d %d %d, &m1, &m2, &m3, &m4, &m5, aggr");

   /* if (aggr>100)
    {
        printf("This is out of our limit");
    }
    else{
        printf("You have passed");
    }*/



    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 5;

    printf("the aggregate marks scored by a student is=%d\n");
    printf("Percentage marks scored by a student is =%f\n");

    return 0;
}


