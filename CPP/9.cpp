// Minimise the maximum difference between heights [V.IMP]
#include <iostream>
#include <algorithm>
using namespace std;
int getMinimizeHeights(int arr[], int n, int k)
{
    if (n == 1)
        return 0;
    sort(arr, arr + n);
    int diff = arr[n - 1] - arr[0];
    int minimum = arr[0] + k;
    int maximum = arr[n - 1] - k;
    int temp = 0;
    if (minimum > maximum)
    {
        temp = minimum;
        minimum = maximum;
        maximum = temp;
    }
    for (int i = 1; i < n - 1; i++)
    {
        int difference = arr[i] - k;
        int sum = arr[i] + k;
        if (difference >= minimum || sum <= maximum)
            continue;
        if (maximum - difference <= sum - minimum)
            minimum = difference;
        else
            maximum = sum;
    }
    return min(diff, maximum - minimum);
}
int main()
{
    int arr[] = {7, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;
    cout << getMinimizeHeights(arr, n, k);
    return 0;
}