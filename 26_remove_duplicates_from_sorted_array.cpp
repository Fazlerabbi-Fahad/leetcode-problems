// Online C++ compiler to run C++ program online
// nums = [1,1,2]
// nums = [0,0,1,1,1,2,2,3,3,4]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> copy_nums;
    for(int i=0;i<nums.size();i++){
        auto it=find(copy_nums.begin(),copy_nums.end(),nums[i]);
        if(it==copy_nums.end()){
            copy_nums.push_back(nums[i]);
        }
    }
    nums.clear();
    nums=copy_nums;
    return nums.size();
}
    
int main() {
    // Write C++ code here
    int size;
    cin>>size;
    
    vector<int> nums(size);
    
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    
    int result=removeDuplicates(nums);
    cout<<result;

    return 0;
}
