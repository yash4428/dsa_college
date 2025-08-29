#include <iostream>
using namespace std;
int arrSize;
int arr[100];

void create(){
    cout<<"enter size of array:";
    cin>> arrSize;
    cout<<"enter array: ";

    for(int i=0;i<arrSize;i++){
        cin>> arr[i];
    }
}
void display(){
     for(int i=0;i<arrSize+1;i++){
        cout<<arr[i]<<" ";
    }
}

void insert(){
    int pos;
    int element;
    cout<<"enter position:"<<endl;
    cin>>pos;
    cout<<"enter element"<<endl;
    cin>>element;
    for(int i=arrSize;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;

    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
}

void del(){
    int pos;
    cout<<"enter position"<<endl;
    cin>>pos;

    for(int i=pos;i<arrSize;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<arrSize-1;i++){
        cout<<arr[i]<<" ";
    }
}

void search(){
    int element;
    int pos;
    cout<<"enter element"<<endl;
    cin>>element;
    for(int i=0;i<arrSize;i++){
        if(arr[i]==element){
            pos=i;
        }
    }
    cout<<"position of"<<element<<"is:"<<pos<<endl;
}

int main(){
    int number=0;
    char answer='y';

while(number!=6){
    cout<<"menu:"<<endl;
    cout<<"1:create array"<<endl<<"2:display array"<<endl<<"3:insert"<<endl<<"4:delete"<<endl<<"5:linear search"<<endl<<"6:end"<<endl;
    cout<<"enter:"<<endl;
  
    cin>>number;
    switch(number){
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
         case 4:
            del();
            break;
        case 5:
            search();
        case 6:
            break;
        default:
            cout<<"error";
    }
}
    return 0;
}