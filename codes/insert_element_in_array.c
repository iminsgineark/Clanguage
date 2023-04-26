#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int i,num,size,pos;
    printf("Enter the size of the array : \n");
    scanf("%d", &size);
    printf("Enter the elements in array : \n");
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to insert :\n");
    scanf("%d", &num);
    printf("Enter the position where you want to insert the number : \n");
    scanf("%d", &pos);
    for(int i = size; i >= pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    size++;
    printf("The new array is :\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
