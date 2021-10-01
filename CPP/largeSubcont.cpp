#include <iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int tempMax = arr[0];
    int currentMax = tempMax;

    for (int i = 1; i < n; i++)
    {
        currentMax = max(arr[i], currentMax + arr[i]);
        tempMax = max(tempMax, currentMax);
    }
    return tempMax;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    cout << "Maximum Sum of the Sub-array is: " << maxSum(arr, n);
}