#include <stdio.h>


void arrrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    
}

void arrprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i , arr[i]);
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("Before reversing the array.\n");
    arrprint(arr);
    arrrev(arr);
    printf("After reversing the array.\n");
    arrrev(arr);
    return 0;
}