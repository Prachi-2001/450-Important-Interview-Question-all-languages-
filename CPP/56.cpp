// Question name- Reverse a string
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
void reverse_string(string &s){
    ll n=s.length();
    f(i,0,n/2){
        char t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string s;
	cin>>s;
	reverse_string(s);
	cout<<s;
}
