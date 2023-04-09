#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0,j=1,k=2;i<50;)
    {
        printf("%d %d %d\n",i,j,k);
        i++,j++,k++;
    }
    return 0;
}
