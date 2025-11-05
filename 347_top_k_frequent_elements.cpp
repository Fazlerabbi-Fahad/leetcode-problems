// Online C++ compiler to run C++ program online
// nums = [1,1,1,2,2,3], k = 2
// nums = [1], k = 1
// nums = [1,2,1,2,1,2,3,1,3,2], k = 2
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
     vector<int> topFre;   
     vector<int> topKFre;  
     unordered_map<int,int> myMap;
     
     for(int n:nums){
         myMap[n]++;
     }
     
     for(const auto& pair:myMap){
         topFre.push_back(pair.second);
     }
     
     sort(topFre.begin(),topFre.end(),greater<int>());
     
     for(int i=0;i<k;i++){
       
        for(const auto& pair:myMap){
         auto it=find(topKFre.begin(),topKFre.end(),pair.first);
             if(topFre[i]==pair.second&&it==topKFre.end()){
                 topKFre.push_back(pair.first);
             }
        }
     }
     
     return topKFre;
}
    
int main() {
    int size;
    cout<<"Give Size:";
    cin>>size;
    vector<int> nums(size);
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    
    vector<int> result=topKFrequent(nums,k);
    for(int i:result){
        cout<<i;
    }
    
    return 0;
}
