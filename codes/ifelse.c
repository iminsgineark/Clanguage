#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered your age as %d\n",age);
    if(age>=18){
        printf("You are eligible to play Battlefield 2042\n");
    }
    else if(age>12){
        printf("you are only eligible for Battlefield 2042 beta version\n");

    }
    else{
        printf("You are not eligible to play Battlefiled 2042");
    }
    return 0;

}
