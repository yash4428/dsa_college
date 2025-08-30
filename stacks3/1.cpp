#include <iostream>
using namespace std;
#define MAX 3

class Stack{
    int arr[MAX];
    int top;
    public:
     Stack() {
        top = -1;
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool isFull(){
        return (top==MAX-1);
    }
    void push(int x){
        if(isFull()==1){
            cout<<"stack overflow"<<endl;
        }
        else{
            top=top+1;
            arr[top]=x;
            cout<<x<<" was pushed in stack"<<endl;
        }
    }
    void pop(){
        if(isEmpty()==1){
            cout<<"stack underflow"<<endl;
        }
        else{
            cout<<arr[top]<<" was popped"<<endl;
            top--;
        }
    }
    void peak(){
        if(isEmpty()==1){
            cout<<"stack empty"<<endl;
        }
        else{
            cout<<"top element="<<arr[top]<<endl;
        }
    }
    void display(){
         if(isEmpty()==1){
            cout<<"stack empty"<<endl;
        }
        else{
            cout<<"stack is:"<<endl;
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
        }
    }

};

int main() {
    Stack s;
    int value;
    cout<<s.isEmpty()<<endl;
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    cout<<s.isFull()<<endl;
    s.pop();
    s.pop();
    s.peak();
    s.push(8);
    s.push(9);
    s.display();

    return 0;
}