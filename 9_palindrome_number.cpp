// Online C++ compiler to run C++ program online
// x = 121
// x = -121
// x = 10

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x) {
    string strx=to_string(x);
    int i=0;
    int j=strx.length()-1;
    string c=strx;
    
    while(j<strx.length()){
        c[i]=strx[j];
        i++;
        j--;
    }
    
    if(strx==c){
        return true;
    }
    return false;
}

int main() {
    int x = 10;
    
    bool result=isPalindrome(x);
    cout<<result;
    
    return 0;
}
