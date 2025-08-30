#include <iostream>
#include <stack>
#include <string>
#include <cmath> 
using namespace std;

int evalPostfix(string str){
    stack<int> s;

    for(int i=0;i<str.length();i++){
        char c=str[i];

        // If character is a space, skip it (for multi-digit support later)
        if(c == ' ') continue;

        if(c>='0'&&c<='9'){//push number to stack
            s.push(c - '0');//converting char to int by subtracting ascii value of 0
        }
        else{                //if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^'){// operator
            int a = s.top();
            s.pop();
            int b= s.top();
            s.pop();
            switch(c){
                case '+': s.push(b+a); break;
                case '-': s.push(b-a); break;
                case '*': s.push(b*a); break;
                case '/': s.push(b / a); break;
                case '^': s.push(pow(b, a)); break;
            }
        }
    }
    return s.top();

}
int main() {
    string postfix="234+*6-";
    cout<<evalPostfix(postfix)<<endl;// answer=8
    //2 * (3 + 4) - 6 = 8.
    return 0;
}