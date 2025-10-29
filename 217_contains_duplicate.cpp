// Online C++ compiler to run C++ program online
// nums = [1,2,3,1]
// nums = [1,2,3,4]
// nums=[1,1,1,3,3,4,3,2,4,2]
#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map<int, int> hashMap;
    for (int i = 0; i < nums.size(); i++) {

        if (hashMap.find(nums[i]) != hashMap.end()) {
            return true;
        }

        hashMap[nums[i]]++;
    }

    return false;
}
int main() {
    
    int size;
    cin>>size;
    
    vector<int> nums(size);
    
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    
    bool result=containsDuplicate(nums);
    cout<<result;
    return 0;
}
