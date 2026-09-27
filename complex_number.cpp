#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;
    Complex add(Complex c)
    {
    Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    Complex multiply(Complex c)
    { 
        Complex result;
        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);
        return result;
    }
};
Complex subtract(Complex c1, Complex c2)
{
            Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
int main(){ 
     Complex c1, c2, result;
    cout << "Enter real and imaginary part of f1 number: ";
    cin >> c1.real >> c1.imag;
    cout << "Enter real and imaginary part of f2 number: ";
    cin >> c2.real >> c2.imag;
    result = c1.add(c2);
    cout << "Addition = "
         << result.real << " + "
         << result.imag << "i" << endl;
    result = subtract(c1, c2);
    cout << "Subtraction = "
         << result.real << " + "
         << result.imag << "i" << endl;
    result = c1.multiply(c2);
    cout << "Multiplication = "
         << result.real << " + "
         << result.imag << "i" << endl;
    return 0;
}