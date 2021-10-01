# code to find the duplicate characters in a string

s = input("Enter the String: ")
duplicate = {}
for char in s:
   if char in duplicate:
      duplicate[char] += 1
   else:
      duplicate[char] = 1
      
for key, value in duplicate.items():
   if value > 1:
      print(key, end = " ")
