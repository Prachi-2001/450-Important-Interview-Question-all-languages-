import operator
class Solution:
    def merge(self, a):
        l = len(a)
        a.sort(key = operator.itemgetter(0))
        #print(a)
        res , i , re = a[0],0 , []
        while i<l :
            #print('i',i)
            
            if i == l-1: # insert the element in the res,when the list reaches the end
                re.append(res)
                return re
            
            elif res[1] >= a[i+1][0]:
                res = [res[0],max(res[1],a[i+1][1])]
                
                #print('res',res)
            
                
            else:
                re.append(res)
               
                
                res = a[i+1]
                
            i+=1   

intervals = [[1,3],[2,6],[8,10],[15,18]]
merged_interval = Solution().merge(intervals)
print("Interval after merged {}".format(merged_interval))