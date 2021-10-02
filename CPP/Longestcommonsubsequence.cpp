//longest common subsequence
#include <iostream>
#include "bits/stdc++.h"
using namespace std ;
//maximum function
int max(int a, int b){
    return (a>b) ? a:b ;
}
/*
//recursive method
int lcs(string s1 ,string s2,int n ,int m){
    //base condition
    if(n==0 || m==0){
        return 0 ;
    }
    if(s1[n-1] == s2[m-1]){
        return 1 + lcs(s1,s2,n-1,m-1) ;
    }
    else{
        return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }

}*/
/*
//recursive method with memorization
int dp[101][101] = {-1};
int lcs(string s1,string s2,int n,int m ){
    //base condittion
    if(n==0 || m==0){
        return 0;
    }
    if(dp[n-1][m-1] != -1){
        return dp[n-1][m-1];
    }
    if(s1[n-1]==s2[m-1]){
        dp[n-1][m-1] = 1+lcs(s1,s2,n-1,m-1);
        return dp[n-1][m-1] ;
    }
    else{
        dp[n-1][m-1] = max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
        return dp[n-1][m-1] ;
    }

}
*/
int lcs(string s1,string s2,int n,int m){
    int dp[n+1][m+1];
    for(int i =0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i =0;i<=m;i++){
        dp[0][i] = 0;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1] ) ;
            }
        }
    }
    return dp[n][m] ;
}
int main(){
    string s1 =  "abcdgh";
    string s2 =  "aedfhr";
    cout<<lcs(s1,s2,6,6)<<endl ;
    
    return 0 ;
}