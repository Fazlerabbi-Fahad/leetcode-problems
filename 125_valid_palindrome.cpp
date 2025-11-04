// Online C++ compiler to run C++ program online
// s = "A man, a plan, a canal: Panama"
// s = "race a car"
// s = " "
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    string temp;
  
    for(char c:s){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
            c=tolower(c);
            temp+=c;
        }
    }
    int i=0;
    int j=temp.size()-1;
    
    while(i<j){
        if(temp[i]!=temp[j]){
            return false; 
        }
        i++;
        j--;
    }
    
    return true;
}

int main() {
    string s = "0P";
    
    bool result=isPalindrome(s);
    cout<<result;
    return 0;
}
