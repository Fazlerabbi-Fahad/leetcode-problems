// Online C++ compiler to run C++ program online
// /prices = [7,1,5,3,6,4]
// prices = [7,6,4,3,1]
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit=0;
    int minBuy=INT_MAX;
    
    for(int price:prices){
        if(price<minBuy) minBuy=price;
        
        int profit=price-minBuy;
        
        if(profit>maxProfit) maxProfit=profit;
    };
    return maxProfit;        
}

int main() {
    // Write C++ code here
    int size;
    cin>>size;
    
    vector<int> prices(size);
    
    for(int i=0;i<size;i++){
        cin>>prices[i];
    }
    
    int result=maxProfit(prices);
    cout<<result;

    return 0;
}
