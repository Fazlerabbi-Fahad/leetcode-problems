// Online C++ compiler to run C++ program online
//  nums1 = [1,2,2,1], nums2 = [2,2]
// nums1 = [4,9,5], nums2 = [9,4,9,8,4]
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> myMap;
        
        for(int n:nums1){
            myMap[n]++;
        }
        
        for(int i=0;i<nums2.size();i++){
            auto it=myMap.find(nums2[i]);
            if(it!=myMap.end()&&myMap[nums2[i]]>0){
                myMap[nums2[i]]-=1;
                result.push_back(nums2[i]);
            }
        }
        
        return result;
}

int main() {
    int nums_size;
    
    cout<<"Size For Num1:"<<endl;
    cin>>nums_size;
    
    vector<int> nums1(nums_size);
    for(int i=0;i<nums_size;i++){
        cin>>nums1[i];
    }
    
    int nums_size1;
    
    cout<<"Size For Num2:"<<endl;
    cin>>nums_size1;
    
    vector<int> nums2(nums_size1);
    for(int i=0;i<nums_size1;i++){
        cin>>nums2[i];
    }
    
    vector<int> result= intersect(nums1,nums2);
    
    for(int nu:result){
        cout<<nu;
    }
    
    return 0;
}
