//common elements in three unsorted arrays
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[5]={2,4,3,6,8};
    int b[5]={3,5,7,9,4};
    int c[5]={8,5,3,4,6};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
        if(a[i]==b[j]&&b[j]==c[k]){
            cout<<"The commom element is ";
            cout<<a[i]<<endl;
        }
    }
    }
    }

    return 0;
    
    
}
