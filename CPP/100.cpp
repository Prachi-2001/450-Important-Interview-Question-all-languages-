// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char,int> m {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C',100},{'D',500},{'M', 1000}};
        int n = str.size() ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(i+1<n and m[str[i]]<m[str[i+1]]){
                sum-=m[str[i]];
            }
            else{
                sum+=m[str[i]];
            }
        }
        return sum ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends