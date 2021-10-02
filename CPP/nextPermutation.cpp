class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        if(n == 1)return ;
        //intution esa hai ki last se start krenge dekhna to ek woh incresing hoga fir decreasing to jaha se decreasing start ho use lelo
        
        int ind1 = -1;
        for(int i = n-2;i>=0;i--)
        {
            if(a[i] < a[i+1])
            {
                ind1 = i;
                break;
            }
        }
        // cout<<ind1<<endl;
        if(ind1 == -1)
        {
            reverse(a.begin(),a.end());
            return;
        }
        
        for(int i = n-1;i>ind1;i--)
        {
            if(a[i] > a[ind1])
            {
                // cout<<a[i]<<endl;
                swap(a[i],a[ind1]);
                ind1++;
                reverse(a.begin() + ind1,a.end());
                break;
            }
        }
        
        return;
    }
};
