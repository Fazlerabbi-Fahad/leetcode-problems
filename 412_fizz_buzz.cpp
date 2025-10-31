// Online C++ compiler to run C++ program online
// n = 3
// n = 5
// n = 15
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> s;
    for(int i=1;i<=n;i++){
        if(i%3==0&&i%5==0){
            s.push_back("FizzBuzz");
        }else if(i%3==0){
            s.push_back("Fizz");
        }else if(i%5==0){
            s.push_back("Buzz");
        }else{
            string k=to_string(i);
            s.push_back(k);
        }
    }
    
    return s;
}
    
int main() {
    int n;
    cin>>n;
    
    vector<string> result=fizzBuzz(n);
    
    for(string k:result){
        cout<<k;
    }

    return 0;
}
