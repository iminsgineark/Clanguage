#include<stdio.h>
int main()
{
    int marks[5],i;
    printf("enter the marks of the students\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n entered marks of students %d is%d",i,marks[i]);
    }
    return 0;
}
