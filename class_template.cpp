#include<iostream>
using namespace std;
template <class t>
class pair{
    public:
    t data1;
    t data2;

    pair(t d1, t d2){
        data1= d1;
        data2= d2;
    }
    t displaydetails(){
        if(data1>data2){
            return data1;
        }else
        {
            return data2;
        }
    }
};
int main(){
    pair <int> s1;
    s1.pair(10,11);
    s1.displaydetails();

}