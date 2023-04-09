#include<stdio.h>
int main()
{
    int gift;
    printf("Only 1 for mathematics\n");
    printf("Only 2 for science\n");
    printf("Only 3 for CSE\n");

    scanf("%d", &gift);

    if(gift<=1){
        printf("Hurray! You have won $15\n");
    }
    else if (gift<=2){
        printf("Hurray! you have won $10\n");
    }
    else if(gift<=3){
        printf("Hurray!you have won $8\n");
    }
    else if(gift>=4){
        printf("pardon!you have entered the wrong number\n");
    }

   return 0;
}
