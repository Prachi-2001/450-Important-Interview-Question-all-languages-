#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &price){
    int profit = 0;
    for(int i=1;i<price.size();i++)
        if(price[i]>price[i-1])
            profit +=(price[i]-price[i-1]);
    return profit;
}

int main(){

	vector<int> price;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		price.push_back(x);}
	cout << maxProfit(price);

	return 0;
}
