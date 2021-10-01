#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 

int findKthSmallest(vector<int> const &input, int k)
{
    
    if (input.size() < k) {
        exit(-1);
    }
 
    
    
    priority_queue<int, vector<int>> pq(input.begin(), input.begin() + k);
 
    
    for (int i = k; i < input.size(); i++)
    {
        
        if (input[i] < pq.top())
        {
            
            pq.pop();
            pq.push(input[i]);
        }
    }
 
    
    return pq.top();
}
 
int main()
{
    vector<int> input = { 7, 4, 6, 3, 9, 1 };
    int k = 3;
 
    cout << "k'th smallest array element is " << findKthSmallest(input, k);
 
    return 0;
}