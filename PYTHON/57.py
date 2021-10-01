#code to check whether string is palindrome or not

s = input("Enter the String: ")
if s == s[::-1]:
    print("Yes")
else:
    print("No")