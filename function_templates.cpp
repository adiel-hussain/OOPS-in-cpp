#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Larger int: " << larger(a, b) << endl;

    float x = 5.5, y = 3.2;
    cout << "Larger float: " << larger(x, y) << endl;

    
    cout << "Before swap: " << a << " " << b << endl;

    swapValues(a, b);

    cout << "After swap: " << a << " " << b << endl;

    return 0;
}