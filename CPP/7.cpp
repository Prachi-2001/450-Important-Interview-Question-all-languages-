// Write a program to cyclically rotate an array by one.
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; //length of the array
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << "max number in array: " << arr[n-1] << "\nmin number in array: " << arr[0] << "\n";
    return 0;
}