// Diamond pattern
#include<iostream>

using namespace std;

int main(){
    int row; cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=row-i+1;j>=1;j--){
            cout<<"* ";
        }
        int space=2*i-3;
        for(int j=1;i>=2 && space>=1;j++){
            cout<<"  ";
            space--;
        }
        for(int j=row-i+1;j>=1;j--){
            if(i==1 && j==1){
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        for(int j=row-i+1;j>=1;j--){
            cout<<"* ";
        }
        int space=2*i-3;
        for(int j=1;i>=2 && space>=1;j++){
            cout<<"  ";
            space--;
        }
        for(int j=row-i+1;j>=1;j--){
            if(i==1 && j==1){
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}