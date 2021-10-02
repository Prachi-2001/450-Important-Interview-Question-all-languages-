/*

Program to reverse an array or string

*/
#include <stdio.h>

// Approach - Swaping the elements from last and first elemnts
void reverse(int array[],int length)
{
    for (int i = 0; i < length/2; i++)
    {
        int temp = array[i];
        array[i] = array[length-i-1];
        array[length-i-1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    printf("Original array - ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Reversed array - ");
    reverse(arr,4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
