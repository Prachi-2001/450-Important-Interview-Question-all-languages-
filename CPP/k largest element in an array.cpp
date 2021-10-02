//k largest elemnet in an array
#include <bits/stdc++.h>

using namespace std;
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int,vector<int>,greater<int>> minh;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        minh.push(arr[i]);
	        if(minh.size()>k)
	        minh.pop();
	    }
	    while(minh.size()!=0){
	        int i=minh.top();
	        a.push_back(i);
	        minh.pop();
	    }
	    sort(a.begin(),a.end(),greater<int>());
	    return a;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
