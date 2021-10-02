#include <iostream>
using namespace std;
 

// Catalan number
unsigned long int catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    unsigned long int catalan[n + 1];
 
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
 
    // Return 
    return catalan[n];
}
 
// Driver code
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        cout << catalanDP(i) << " ";
    return 0;
}
