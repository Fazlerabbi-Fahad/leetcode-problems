// Online C++ compiler to run C++ program online
// nums = [3,2,3]
// nums = [2,2,1,1,1,2,2]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    int maxEl=0;
    int majorityElement=0;
    unordered_map<int,int> myMap;
    
    for(int n:nums){
        myMap[n]++;
        if (maxEl < myMap[n]) {
            maxEl = myMap[n];
            majorityElement = n;
        }
    }
    
    return majorityElement;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    
    int result=majorityElement(nums);
    cout<<result;
    
    return 0;
}
