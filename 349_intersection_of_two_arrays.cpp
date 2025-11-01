// Online C++ compiler to run C++ program online
// nums1 = [1,2,2,1], nums2 = [2,2]
// nums1 = [4,9,5], nums2 = [9,4,9,8,4]
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> num;
    
    for(int n: nums1){
        auto it=find(nums2.begin(),nums2.end(),n);
        auto i=find(num.begin(),num.end(),n);
        if(it!=nums2.end()&&i==num.end()){
            num.push_back(n);
        }
    }
    return num; 
}

int main() {
   int size1;
    cout << "Enter Size For Nums1: ";
    cin >> size1;
    vector<int> nums1;

    cout << "Enter elements for Nums1:\n";
    for (int i = 0; i < size1; i++) {
        int val;
        cin >> val;
        nums1.push_back(val); 
    }

    int size2;
    cout << "Enter Size For Nums2: ";
    cin >> size2;
    vector<int> nums2;

    cout << "Enter elements for Nums2:\n";
    for (int i = 0; i < size2; i++) {
        int val;
        cin >> val;
        nums2.push_back(val); 
    }

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
