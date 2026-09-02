#include<iostream>
#include<string>
using namespace std;
class Text{
    private:
    string str;
    int count;
    public :
    void string(){
        cout<<"enter the word:";
        cin>>str;
    }
    void string_len(){
        count =0;
        for(int i = 0 ; i<str.length();i++){
          
            count++; 
        }
    }
    void display(){
        cout<<"length:"<<count;
    }
};
int main(){
    Text s1;
    s1.string();
    s1.string_len();
    s1.display();
    return 0;
}
