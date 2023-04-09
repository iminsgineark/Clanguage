/*#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int i;
printf("\n Printing base address of the array:");
printf("\n%u %u %u",&a[0],a,&a);
printf("\n Printing addresses of all array elements:");
for(i=0;i<5;i++)
{
printf("\n%u",&a[i]);
}
return 0;
}*/

#include<stdio.h>
int main()
{
    int marks[5]={0,97,96,94,95};
    for(int i=0;i<5;i++)
    {
        printf("the position of student is %d and the marks scored by the student is %d\n",i,marks[i]);

    }
    return 0;
}
