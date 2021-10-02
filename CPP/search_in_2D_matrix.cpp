// Search an element in a matrix
#include<iostream>
#include<string>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter the size of matrix(m x n):\n";
    cin>>m>>n;
    int mat[m][n];
    cout<<"Enter the elements row wise(sorted in increasing order):\n";
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"\nYour matrix:\n";
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter element you want to search in matrix: ";
    int key;
    cin>>key;
    int count=0;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(key == mat[i][j]){
                cout<<"Element found\n";
                cout<<"Row : "<<i+1<<endl;
                cout<<"Column : "<<j+1<<endl;
                count = 1;
                break;
            }
        }
        cout<<endl;
    }
    if(count == 0){
        cout<<"Element not found\n";
    }
    return 0;
}