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

	vector<int> price = {1,5,3,8,12};
	cout << maxProfit(price);

	return 0;
}
