#include<iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inches;
    int TotalDistance(distance d1, distance d2){
        int sumOfFeet, sumofInches ;
        sumOfFeet =d1.feet + d2.feet;
        
        sumofInches = d1.inches + d2.inches;
        if(sumofInches>12){
            sumOfFeet += sumofInches/12;
            sumofInches = sumofInches%12;
        }
         cout<<"total feets:"<<sumOfFeet;
         cout<<"total inches:"<<sumofInches;
    }
};
int main(){
    Distance d1, d2;
    cout<<"enter feets in d1:";
    cin>>d1.feet;
    cout<<"enter inches in d1:";
    cin>>d1.inches;
    cout<<"enter feets in d2:";
    cin>>d2.feet;
    cout<<"enter inches in d2:";
    cin>>d2.inches;
    TotalDistance(d1,d2);
}