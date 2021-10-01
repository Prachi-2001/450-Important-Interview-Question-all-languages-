#include <bits/stdc++.h>
using namespace std;

void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void threeWayPartition(int A[], int end)
{
    int start = 0, mid = 0;
    int pivot = 1;

    while (mid <= end)
    {
        if (A[mid] < pivot)
        {
            swap(A, start, mid);
            ++start, ++mid;
        }
        else if (A[mid] > pivot)
        {
            swap(A, mid, end);
            --end;
        }
        else
        {
            ++mid;
        }
    }
}

int main()
{
    int A[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(A) / sizeof(A[0]);

    threeWayPartition(A, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}