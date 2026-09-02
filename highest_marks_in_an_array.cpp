#include<iostream>
#include<climits>
using namespace std;
class MArks{
    private:
    int arr[5];
    int highest ;
    public:
    input(){
        for(int i =0 ; i <5 ; i++){
            cout<<"enter marks:";
            cin>>arr[i];
        }
    }
    void highestMarks(){
        highest = INT_MIN;
        for(int i = 0 ; i<5 ; i++){
            if(arr[i]>highest){
                highest=arr[i];
            }
            
        }
    }
    void displayResult(){
        cout<<"highest marks :"<<highest;
    }

};
int main(){
    MArks s1;
    s1.input();
    s1.highestMarks();
    s1.displayResult();
    return 0;
}
