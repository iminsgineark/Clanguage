#include<stdio.h>
int main()
{
    int arr[]= {10,20,30,40,5,6,7,8,9};
    int *p1,*p2;
    p1=arr;///p1 = &arr[0];
    printf("\n%d",*p1);
    printf("\nAddress is : %d",p1);
    ++p1;/// p1 will point towards next memory location
    printf("\n%d",*p1);//20 will be displayed
    printf("\nAddress is : %d",p1);
    p1--;//p1 will point towards previous memory location
    printf("\n%d",*p1);/// 10 will be displayed
    printf("\nAddress is : %d",p1);

    p1=p1+2;// Adding a constant to pointer(p1 will point towards 3rd element)
    printf("\n%d",*p1);// 30 will be displayed

//p1=p1-2;//Subtracting a constant from a pointer(P1 will point towards first element)
//printf("\n%d",*p1);// 10 will be displayed

    p2=&arr[4];
    printf("\n%d",*p2);///5 ?
    printf("\n%d",p2-p1);///4 ?
//Subtracting two pointers(Returns 4(no. of elements b/w+1)(Pointers pointing to the same array)
//Comparing two pointers
    while(p1<=p2)
    {
        printf("\n%d",*p1);
        p1++;
    }
//Following are the invalid arithmetic operations(Not allowed on pointers)
///printf("\n%d",p1+p2);//Invalid arithmetic
///printf("\n%d",p1/ p2);//Invalid arithmetic
///printf("\n%d",p1*p2);//Invalid arithmetic
///printf("\n%d",p1%p2);//Invalid arithmetic
///printf("\n%d",p1*2);//Invalid arithmetic
///printf("\n%d",p1/2);//Invalid arithmetic
///printf("\n%d",p1%2);//Invalid arithmetic
    return 0;

}
