# Find the "Kth" max and min element of an array 
def array(arr, k):
#    As we have an unsorted array so first we need to sort the array
  arr.sort()
#   Return kth element in the sorted array
  return arr[k-1]
