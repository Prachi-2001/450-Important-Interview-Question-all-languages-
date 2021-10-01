//find all pairs on integer array whose sum is equal to given number
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void pairedElements(int arr[],
                    int sum, int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            cout << "The pair is : (" << arr[low] << ", " << arr[high] << ")" << endl;
        }
        if (arr[low] + arr[high] > sum)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
}

// Driver code
int main()
{
    int arr[] = {2, 3, 4, -2,
                 6, 8, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    pairedElements(arr, 6, n);
    return 0;
}
