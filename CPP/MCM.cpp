//Q415.)Matrix Chain Multiplication 
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int helper(int s,int e,int *arr,int **dp)
    {
        if(s==e)
        {
            return 0;
        }
        if(dp[s][e]!=-1)
        {
            return dp[s][e];
        }
        dp[s][e]=INT_MAX;
        for(int k=s;k<e;k++)
        {
            dp[s][e]=min(dp[s][e],helper(s,k,arr,dp)+helper(k+1,e,arr,dp)+arr[s-1]*arr[k]*arr[e]);
        }
        return dp[s][e];
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        int **dp = new int*[N];
        for(int i=0;i<N;i++)
        {
            dp[i]=new int[N];
            for(int j=0;j<N;j++)
            {
                dp[i][j]=-1;
            }
        }
        return helper(1,N-1,arr,dp);
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
} 
