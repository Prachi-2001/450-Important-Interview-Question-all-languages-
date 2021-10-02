/* Merge 2 sorted arrays */


// Using hashing to get an efficient solution of complexity O( nlogn + mlogm )
#include<bits/stdc++.h>
using namespace std;
 
// Our function which does the main part of merging arrays
void merge_arrays(int a[], int b[], int n, int m)
{
    // Using map stl to do the merging
    map<int, bool> mp;
     
    //Inserting elements of both arrays in map as their keys 
    for(int i = 0; i < n; i++)
    mp[a[i]] = true;
     
    for(int i = 0;i < m;i++)
    mp[b[i]] = true;
     
    // Printing keys of the map
    // elements marked true will only be displayed.
    for(auto i: mp)
    cout<< i.first <<" ";
}
 
int main()
{
    int n,m;
    cout<<"\nEnter the size of Array 1 : ";
    cin>>m;
    cout<<"\nEnter the size of Array 2 : ";
    cin>>n;

    //dynamically allocating arrays
    int *arr1 = new int[m], *arr2 = new int[n], i;

    // Taking array elements as input
    cout << "\nInput Array 1 elements (Sorted) : ";
    for(i = 0; i<m;i++)
        cin>>arr1[i];

    cout<<"\nInput Array 2 elements (Sorted) : ";
    for(i = 0;i<n;i++)
        cin>>arr2[i];


    cout<<"\nArray after merging is: \n";
    //Function called
    merge_arrays(arr1, arr2, m, n);
     
    return 0;
}