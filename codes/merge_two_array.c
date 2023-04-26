#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],merge[20];
    int i,k,size1,size2;
    printf("Enter the size of 1st array :\n");
    scanf("%d", &size1);
    printf("Enter the elements in array : \n");
    for(int i = 0;i<size1;i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = size1;
    printf("Enter the size of 2nd array :\n");
    scanf("%d", &size2);
    printf("Enter the elements in array 2 :\n");
    for(int i = 0;i<size2;i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }

    printf("The merged array is :\n");
    for(int i = 0;i<k;i++)
    {
        printf("%d\t", merge[i]);
    }
    return 0;
}
