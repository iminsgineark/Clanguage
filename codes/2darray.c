#include<stdio.h>
int main()
{
    int marks[3][2]={{2,3},{6,5},{9,12}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           printf("Entered value is %d %d and the marks is %d\n",i,j,marks[i][j]);
        }
    }
}
