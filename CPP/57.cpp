#include <iostream>


int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    std::cout << "Enter a string: "; std::cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        std::cout << string1 << " is not a palindrome" << std::endl; 
    }    
    else {
        std::cout << string1 << " is a palindrome" << std::endl; 
    }
    system("pause");
    return 0;
}