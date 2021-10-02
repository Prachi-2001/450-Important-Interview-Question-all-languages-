// Sorting an array using bubble sort method
#include<stdio.h>
int main()
{
int arr[5];
//   Taking input in array
  printf("Enter in array");
  for ( int k = 0 ; k < 5; k++)
  {
    scanf("%d",&arr[k]);}
   int i, j,n;
   for (i = 0; i < n-1; i++)     
   {
       // Last i elements are already in place  
       for (j = 0; j < n-i-1; j++){
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);}}}
printf("Minimum element in the array is %d",arr[0]);
  printf("Maximum element in the array is %d",arr[4]);
  return 0;
}
