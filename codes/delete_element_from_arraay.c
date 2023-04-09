#include<stdio.h>
#define size 10
int main()
{
    int arr[size];
    int i,num,pos;
    printf("Enter the number of elements in arraay : \n");
    scanf("%d",&num);
    printf("Enter the elements in array :\n");
    for(int i = 0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to delete the element :\n");
    scanf("%d", &pos);
    for(int i = pos - 1; i < num - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    num--;
    printf("The new array is : \n");
    for(int i = 0; i<num; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
