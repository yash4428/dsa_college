#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op){
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return -1;
}

string infixToPostfix(string str){
    stack<char> s;
    string post;

    for(int i=0;i<str.length();i++){
        char c=str[i];

        if(c>='0'&&c<='9'){//operand add to string
            post= post+c;
        }

        else if(c=='('){// push ( to stack
            s.push(c);
        }

        else if(c==')'){ // keep popping untill ')'
            while(!s.empty()&& s.top()!='('){
                post=post+s.top();
                s.pop();
            }
            if(!s.empty()) s.pop(); //pop leftover '('
        }

        else if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^'){// operator
            while(!s.empty()&& precedence(s.top())>=precedence(c)){ //check precedence
                post = post+ s.top();
                s.pop();
            }
            s.push(c); // push operator
        }
    }

    // Pop all remaining operators
    while(!s.empty()) {
        post = post + s.top();
        s.pop();
    }

    return post;
}

int main() {
    string infix="(4+8)*(6-5)/((3-2)*(2+2))";
    cout<<infixToPostfix(infix)<<endl;
    return 0; //answer= 4 8 + 6 5 - * 3 2– 2 2 + * /
}