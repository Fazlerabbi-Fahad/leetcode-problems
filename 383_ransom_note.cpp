// Online C++ compiler to run C++ program online
// ransomNote = "a", magazine = "b"
// ransomNote = "aa", magazine = "ab"
// ransomNote = "aa", magazine = "aab"
#include <iostream>
#include <unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int> myMap;
    
    for(char r:ransomNote){
        myMap[r]++;
    }
    
    for(char m:magazine){
        if(myMap.find(m)!=myMap.end()&&myMap[m]>0){
            myMap[m]--;
        }
    }
    
    for (const auto& [key, value] : myMap) {
        if(value!=0){
            return false;
        }
    }
    return true;    
}

int main() {
    string ransomNote = "bg";
    string magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
    
    bool result=canConstruct(ransomNote,magazine);
    cout<<result;

    return 0;
}
