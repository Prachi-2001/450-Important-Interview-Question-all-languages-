// Find row with maximum no. of 1's

class Solution {
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
		//code here
		int ans = -1, mx = 0;
		for (int i = 0; i < n; i++) {
			int cnt = arr[i].end() - upper_bound(arr[i].begin(), arr[i].end(), 0);
			if (cnt > mx) {
				ans = i;
				mx = cnt;
			}
		}
		return ans;
	}

};