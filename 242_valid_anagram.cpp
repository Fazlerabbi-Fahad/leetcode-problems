// Online C++ compiler to run C++ program online
// s = "rat", t = "car"
// s = "anagram", t = "nagaram"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    int i=0;
    int j=0;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    while(i<s.size()||j<t.size()){
        if(s[i]!=t[j]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main() {
    string s;
    string t;
    
    cin>>s;
    cin>>t;
    
    bool result=isAnagram(s,t);
    cout<<result;
    
    return 0;
}
