def reverseList(A, start, end):
    while start < end:
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1
 
# Driver function to test above function
A = [1, 20, 35, 14, 51, 60]
print(A)
reverseList(A, 0, 5)
print("Reversed list is")
print(A)