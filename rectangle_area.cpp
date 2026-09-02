#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    int area;
    public:
    void input(){
        length = 5;
        breadth = 3;
    }
    void calculateArea(){
        
        area = length * breadth;
    }
    void displayArea(){
        cout<<"area:"<<area;
    }
};
int main(){
    Rectangle s1;
    s1.input();
    s1.calculateArea();
    s1.displayArea();
    return 0;
}