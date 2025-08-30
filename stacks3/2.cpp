#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str="DataStructure";
    stack<char> s;
    string result(str.length(),' ');

    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        result[i]=s.top();
        s.pop();
    }
    for(int i=0;i<result.length();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}