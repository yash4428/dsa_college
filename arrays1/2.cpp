#include <iostream>
using namespace std;

int main(){
int arr[5];
int count=5;
cout<<"enter array:";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
 
int val=0;
for(int k=0;k<count;k++){
    val=arr[k];
    for(int i=k+1;i<count;i++){
     if(arr[i]==val){
        for(int j=i;j<count;j++){
          arr[j]=arr[j+1];
        }
        count--;
     }
    }
}

for(int i=0;i<count;i++){
    cout<<arr[i];
}


    return 0;
}