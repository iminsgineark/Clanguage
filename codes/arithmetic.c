#include<stdio.h>
int main()
{
    int num1,num2,result;
printf("Enter the values of num1 and num2 : ");
scanf("%d%d",&num1,&num2);
result = num1+num2;
printf("\nSum is : %d ", result);
result = num1-num2;
printf("\nSub is : %d", result);
result = num1*num2;
printf("\nMultiplication is : %d ", result);
result = num1/num2;
printf("\nDivision is : %d", result);///quotient
result = num1%num2; /// % returns the remainder
printf("\nRemainder/modulus is : %d",result);
}
