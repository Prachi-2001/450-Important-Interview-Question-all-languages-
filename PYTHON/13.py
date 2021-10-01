# This is used to find the maximum sub-array sum in the given array
class Solution:
    def maxSubArray(self,a):
        s , m = 0 , a[0]
        if len(a)==1: return a[0]
        for i in a:
            if s<0: s = 0
            s+=i
            #print(s)
            if s>m: m = s
        return m

arr = Solution().maxSubArray([-2,1,-3,4,-1,2,1,-5,4])
print("The maximum sub array sum {}".format(arr))