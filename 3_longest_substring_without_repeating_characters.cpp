#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


int lengthOfLongestSubstring(string s) {
    map<char, int> c;
    int maxLength=0;
    int left=0;
    
    for(int right=0;right<s.length();right++){
        if(c.find(s[right])!=c.end()&&c[s[right]]>=left){
            left=c[s[right]]+1;
        }
        c[s[right]]=right;
        maxLength=max(maxLength,right-left+1);
    }
    return maxLength;
}

int main() {
    // Write C++ code here
    string s;
    cin>>s;
    
    int result=lengthOfLongestSubstring(s);
    cout<<result;
    return 0;
}
