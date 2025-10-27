// Online C++ compiler to run C++ program online
// nums = [0,1,2,2,3,0,4,2], val = 2
// nums = [3,2,2,3], val = 3
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        vector<int> copy_nums;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                copy_nums.push_back(nums[i]);
            }
        }
        
        nums.clear();
        copy(copy_nums.begin(),copy_nums.end(),back_inserter(nums));
        
        return nums.size();
}

int main() {
    // Write C++ code here
    int size;
    cin>>size;
    vector<int> nums(size);
    
    for(int i=0;i<size;i++){
        cin>>nums[i];
    };
    int val;
    cin>>val;
    int result=removeElement(nums,val);
    cout<<result;
    return 0;
}
