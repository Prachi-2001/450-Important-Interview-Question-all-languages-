
/* 
     Move all the negative elements to one side of the array in c
*/



#include <stdio.h>

#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void seprateElements(int arr[], int n)
{
    int i =0,j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(&arr[i],&arr[j]);
            }
            j++;
        }
    }
}
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int arr_size = ARRAY_SIZE(arr);
    int i = 0;
    seprateElements(arr, arr_size);
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}