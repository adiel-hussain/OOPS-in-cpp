#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={4,7,8,6,5};
    int largest =INT_MIN ;
    for(int i = 0 ; i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
       
    }
    cout<<"largest element:"<<largest;
    return 0;
}