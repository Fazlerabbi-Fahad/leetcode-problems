// Online C++ compiler to run C++ program online
// nums = [-1,0,3,5,9,12], target = 9
// nums = [-1,0,3,5,9,12], target = 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int>& nums, int target) {
    if(nums.empty()) return -1;
    int mid=nums.size()/2;
    if(nums[mid]==target) return mid;
    
    if(nums[mid]>target){
        vector<int> newNum(nums.begin(),nums.begin()+mid);
        return search(newNum,target);
    }else{
        vector<int> newNum(nums.begin()+mid+1,nums.end());
        int res=search(newNum,target);
        return (res==-1)? -1:res+mid+1;
    }
    
    return 0;    
}

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    int result=search(nums,target);
    cout<<result;

    return 0;
}
