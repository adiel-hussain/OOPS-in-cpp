#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    string author;
    //parameterized constructor
    public:
    value(string s, string n){
        title = s;
        author = n;
    }
    void display(){
        cout<<"title:"<<title<<endl;
        cout<<"author:"<<author<<endl;
    }
};
int main(){
    Book s1;
    s1.value("programming","tawqeer sir");
    s1.display();
}