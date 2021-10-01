#include<bits/stdc++.h>
using namespace std;
#define ln "\n";
#define TC() int t; cin >> t; while(t--)
#define IO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

int consecutiveSumMax(vector<int> &v){
	int max_sum = v.front();
	int curr = max_sum;
	for(int i = 1; i < v.size(); i++){
		curr = max(v[i] + curr, v[i]);
		max_sum = max(curr,max_sum);
	}
	return max_sum;
}

int main(){

	IO();
	
	vector<int> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	cout << "Max Sum: " <<consecutiveSumMax(v);
	
	return 0;
}
