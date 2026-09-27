#include <iostream>
using namespace std;
class B;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    friend void calculateSum(A, B);
};
class B
{
    int b;
public:
    B(int y)
    {
        b = y;
    }
    friend void calculateSum(A, B);
};
void calculateSum(A objA, B objB)
{
    cout << "Sum = " << objA.a + objB.b << endl;
}

int main()
{
    A objA(10);
    B objB(20);
    calculateSum(objA, objB);
    return 0;
}