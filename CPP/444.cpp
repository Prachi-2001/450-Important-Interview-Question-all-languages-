//LargestSum Contiguous Subarray 

//Time complexity : O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int size)
{
    int max_so_far=0,max_end_here=0;
    int i;
    for(i=0;i<size;i++)
    {
        max_end_here=max_end_here+a[i];
        max_end_here=max(max_end_here,0) ; //if sum is negative set to 0
        max_so_far=max(max_so_far,max_end_here);

    }
    return max_so_far;

}
int main()
{
    
    int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"\n"<<"largest sum is:"<<kadane(a,n);
    
    return 0;
}