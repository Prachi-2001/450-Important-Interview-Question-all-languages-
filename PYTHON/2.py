#!/usr/bin/env python
# coding: utf-8

# In[9]:


arr = [25, 11, 7, 75, 56];     
     
#Initialize max with first element of array.    
max = arr[0];    
     
#Loop through the array    
for i in range(0, len(arr)):    
    #Compare elements of array with max    
   if(arr[i] > max):    
       max = arr[i];    
print("Largest element present in given array: " + str(max));  
min = arr[0];    
     
#Loop through the array    
for i in range(0, len(arr)):    
    #Compare elements of array with min    
   if(arr[i] < min):    
       min = arr[i];    
     
print("Smallest element present in given array: " + str(min));    


# In[ ]:





# In[ ]:




