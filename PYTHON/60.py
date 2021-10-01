# Code to check if strings are rotations of each other or not

s1 = input("Enter the First String: ")
s2 = input("Enter the second string: ")
size1 = len(s1)
size2 = len(s2)
temp = ''
if size1 != size2:
    print ("Strings are not rotations of each other")
temp = s1 + s1
if (temp.count(s2)> 0):
	print ("Strings are rotations of each other")
else:
	print ("Strings are not rotations of each other")

