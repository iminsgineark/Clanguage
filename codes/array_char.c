#include<stdio.h>
#define size 100
int main()
{
    int arr[size];
    int i,ele;
    printf("Enter the num of elements in an array:\n");
    scanf("%d", &ele);

    printf("Enter the %d elements in array :\n", ele);

    for(int i=0; i<ele; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf("Elements in array are :\n");

    for(int i=0; i<ele; i++)
    {
        printf("%d\n",arr[i]);
    }


}
