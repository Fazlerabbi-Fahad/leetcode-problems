// Online C++ compiler to run C++ program online
// s = "leetcode"
// s = "loveleetcode"
// s = "aabb"
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int> freq;
    
    for(char c:s){
        freq[c]++;
    }
    
    for(int i=0;i<s.size();i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int main() {
    string s;
    cin>>s;
    int result=firstUniqChar(s);
    cout<<result;
    return 0;
}
