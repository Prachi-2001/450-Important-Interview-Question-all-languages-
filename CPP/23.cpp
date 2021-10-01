//find all pairs on integer array whose sum is equal to given number
#include<iostream>
using namespace std;

int main()
{
  int size,sum;
  cout<<"\n enter size of array:";
  cin>>size;
  int i,a[size],j;
  cout<<"\n enter sum :";
  cin>>sum;
  for(i=0;i<size;i++)
  {
      cout<<"\n enter "<<i+1<<" th element:";
      cin>>a[i];
  }
  for(i=0;i<size;i++)
  {
      for(j=i;j<size;j++)
      {
           if(a[i]+a[j]==sum)
           {
               cout<<a[i]<<" "<<a[j]<<endl;
           }
      }
  }
  return 0;
}
