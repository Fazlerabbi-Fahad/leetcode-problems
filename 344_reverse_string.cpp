// Online C++ compiler to run C++ program online
// s = ["h","e","l","l","o"]
// s = ["H","a","n","n","a","h"]
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    vector<char> t=s;
    int i=0;
    int j=s.size()-1;
    
    while(i<s.size()){
        s[i]=t[j];
        i++;
        j--;
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    
}

int main() {
    int size;
    cin>>size;
    
    vector<char> s(size);
    
    for(int i=0;i<s.size();i++){
        cin>>s[i];
    }
    
    reverseString(s);
    
    return 0;
}
