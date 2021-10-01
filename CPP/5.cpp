// Move all the negative elements to one side of the array 
#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{

    int temp[n];

    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0)
            temp[j++] = arr[i];

    if (j == n || j == 0)
        return;

    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];

    memcpy(arr, temp, sizeof(temp));
}

int main()
{
    int arr[] = {1, -1, -3, -2, 7, 5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}