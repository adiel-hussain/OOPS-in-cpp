#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={7,4,6,9,5};
    int smallest =INT_MAX ;
    for(int i = 0 ; i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
       
    }
    cout<<"smallest element:"<<smallest;
    return 0;
}