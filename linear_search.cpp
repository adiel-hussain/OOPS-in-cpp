#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target = 3;
    for(int i = 0 ; i<5;i++){
        if(arr[i]==target){
            cout<<"index :"<<i<<endl;
        }else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}