// Online C++ compiler to run C++ program online
// s = "()"
// s = "()[]{}"
// s = "(]"
// s = "([])"
// s = "([)]"

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> paren;
    for(char c:s){
        if(!paren.empty()){
            char topParen=paren.top();
            if(c==')'&& topParen=='('){
                paren.pop();
                continue;
            }else if(c=='}'&& topParen=='{'){
                paren.pop();
                continue;
            }else if(c==']'&& topParen=='['){
                paren.pop();
                continue;
            }
        }
        paren.push(c);
    }
    
    
    return paren.empty();
}

int main() {
    string s;
    cin>>s;
    
    bool result=isValid(s);
    cout<<result;
    
    return 0;
}
