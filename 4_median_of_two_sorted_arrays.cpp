// Online C++ compiler to run C++ program online
// nums1 = [1,3], nums2 = [2]
// nums1 = [1,2], nums2 = [3,4]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    double median=0;
    vector<int> merged_array;
    
    merged_array.insert(merged_array.end(),nums1.begin(),nums1.end());
    
    merged_array.insert(merged_array.end(),nums2.begin(),nums2.end());
    
    sort(merged_array.begin(),merged_array.end());
    
    if(merged_array.size()%2==0) {
        int m=merged_array.size()/2;
        median=(merged_array[m]+merged_array[m-1])/(double)2;
    }else{
        int m=merged_array.size()/(double)2;
        median=merged_array[m];
    }
    return median;  
}

int main() {
    // Write C++ code here
    vector<int> nums1={1,3};
    vector<int> nums2 = {2};
    
    double result=findMedianSortedArrays(nums1,nums2);
    cout<<result;
    return 0;
}
