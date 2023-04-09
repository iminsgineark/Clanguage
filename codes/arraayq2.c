#include<stdio.h>
int main()
{
    int age[4][4]= {{27,23,34,56},{74,87,65,72},{52,43,14,53},{34,75,82,61}};

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d\n",age[i][j]);
        }
        printf("\n");
    }
    return 0;
}
