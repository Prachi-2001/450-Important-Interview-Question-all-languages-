"""
This will change the array without using any extra space. and sort the array in-place.
Space complexity - 0
"""
class Solution:
    def sortColors(self, nums):
        """
        Do not return anything, modify nums in-place instead.
        """
        low = mid = 0
        high = len(nums)-1
        while mid<=high:
            if nums[mid] == 0:
                temp = nums[low]
                nums[low] = nums[mid]
                nums[mid] = temp
                low+=1
                mid+=1
                #print('0',nums)
            elif nums[mid]  == 1:
                mid+=1
                #print('1',nums)
            elif nums[mid]  ==2:
                temp = nums[high]
                nums[high] = nums[mid]
                nums[mid] = temp
                high-=1
                #print('2',nums)
a = [2,0,2,1,1,0]
print("Array before sorting {}".format(a))
Solution().sortColors(a)
print("Array after sorting  {}".format(a))        