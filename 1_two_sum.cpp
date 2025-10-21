#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> twoSum(vector<int>& arr,int target){
    int i=0;
    int complement=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(auto i=arr.begin();i!=arr.end();++i){
        complement=target-*i;
        auto it = find(next(i), arr.end(), complement);
        
        if(it!=arr.end()){
            int firstIndex=distance(arr.begin(),i);
            int secondIndex=distance(arr.begin(),it);
            return {firstIndex,secondIndex};
        }
    }
    
    return {};
}

int main() {
    // Write C++ code here
    int size;
    cin>>size;
    vector<int> arr;
    int target;
    
    for(int i=0;i<size;i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    
    cout<<"Give Target";
    cin>>target;
    vector<int> result=twoSum(arr,target);
    cout<<result[0];
    cout<<result[1];
    return 0;
}
