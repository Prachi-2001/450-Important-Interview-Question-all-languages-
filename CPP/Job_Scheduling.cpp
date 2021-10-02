// JOB SCHEDULING USING GREEDY ALGORITHM
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct job
{
    int id;     // job id
    int profit; // Profit if job is over before or on deadline
    int deadline; // Deadline of job
};

//Swap function
void Swap(struct job *a, struct job *b)
{

    int temp = a->id;
    a->id = b->id;
    b->id = temp;

    temp = a->deadline;
    a->deadline = b->deadline;
    b->deadline = temp;

    temp = a->profit;
    a->profit = b->profit;
    b->profit = temp;
}

// partiton function for implementing quick sort
int partition(job arr[], int l, int r)
{
    int pivot = arr[r].profit;
    int i = l - 1, j;
    for (j = l; j < r; j++)
    {
        if (arr[j].profit < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

// we are using quick sort for sorting all the jobs according to profit
void quick_sort(job arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}

// job scheduling algorithm
void job_Schedule(job arr[], int n) ///function for schedule the job
{
  // Sort all jobs according to decreasing order of profit
    quick_sort(arr, 0, n - 1);
    bool slot[n];     // To keep track of free time slots
    int res[n];       // To store result (Sequence of jobs)
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                res[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    cout << "MAXIMUM PROFIT SEQUENCE OF JOB : ";
    for (int i = 0; i < n; i++)
    {
        if (slot[i])
        {
            cout << arr[res[i]].id << " ";
            maximum += arr[res[i]].profit;
        }
    }
    cout << "\nMAXIMUM PROFIT IS: " << maximum;
}

// driver function
int main()
{
    int n;
    cout << "ENTER NUMBER OF jobS: ";
    cin >> n;
    job a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id;
        cin >> a[i].deadline;
        cin >> a[i].profit;
    }
    job_Schedule(a, n);
    return 0;
}
