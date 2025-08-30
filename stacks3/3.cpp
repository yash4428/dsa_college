#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool stackk(string str) {
    stack<char> s;  
    for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='['||str[i]=='{'){//openeing
            s.push(str[i]);
        }
        else{//closing
            if(s.size()==0){
                return false;
            }

            if((s.top()=='(' && str[i]==')')||
            (s.top()=='[' && str[i]==']')||
            (s.top()=='{' && str[i]=='}')){
                s.pop();
            }
            else{//no match
                return false;
            }

        }
    }
   return s.size()==0;
}
int main(){
    string str="[][[{{}}]]{{[]}}(";

    cout<<stackk(str);

    return 0;
}
