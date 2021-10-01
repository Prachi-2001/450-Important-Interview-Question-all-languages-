// find Largest sum contiguous Subarray [V. IMP]
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
    int k;
    cin >> k;
    cout << arr[k-1] << " " << arr[n-k] << "\n";
    return 0;
}