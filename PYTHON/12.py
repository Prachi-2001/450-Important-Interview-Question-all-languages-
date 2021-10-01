# Merge 2 sorted arrays without using extra space
class Solution:
    def swap(self, l1 , l2, m , n):
        """
        Copy all the things in the l2 to l1 using swap.
        :param l1: list one.
        :param l2: list two.
        :param m: lenth of l1.
        :param n: lenth of l2.
        """
        for i in range(n):
            l1[i] = l2[i]
        return l1
    def merge(self, nums1, m, nums2, n):
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if m == 0:
            nums1 = self.swap(nums1, nums2, m ,n)
            return
        if n== 0:
            return 
        n1, n2 = 0,0
        while n1 < m:
            if nums1[n1] <= nums2[n2]:
                # print("indide greterthan")

                n1 += 1
                # print('n1',n1,"array",nums1)
            elif nums1[n1] > nums2[n2]:
                # print("inside samllerthan")
                nums1[n1], nums2[n2] = nums2[n2], nums1[n1]
                nums2 = sorted(nums2)
                n1 +=1 
                #print('n1',n1,"array",nums1)
        for _ in range(n):
            # print(n1,n2)
            nums1[n1] = nums2[n2]
            n1+=1
            n2+=1
        #print(nums1)
            
def merge_two_sorted_arrays(A,m, B, n):
    a, b, write_index = m-1, n-1, m + n - 1

    while b >= 0:
        if a >= 0 and A[a] > B[b]:
            A[write_index] = A[a]
            a -= 1
        else:
            A[write_index] = B[b]
            b -= 1

        write_index -= 1       
        #print(A)

#Solution().merge( [4,5,6,0,0,0], 3, [1,2,3], 3)
#Solution().merge([0], 0, [1], 1)       [4,5,6,0,0,0]
A =[4,5,6,0,0,0]
B = [1,2,3]
print("Before merging {}".format(A))
merge_two_sorted_arrays( A, 3, B, 3)
print("After merging {}".format(A))