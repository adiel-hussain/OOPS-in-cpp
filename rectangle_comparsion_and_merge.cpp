#include <iostream>
using namespace std;
class Rectangle
{public:
    double length;
    double width;
    Rectangle(double l, double w)
    {   length = l;
        width = w;
    }
    void equalArea(Rectangle r)
    {
        double area1 = length * width;
        double area2 = r.length * r.width;
        if (area1 == area2){
            cout << "Both rectangles have equal area." << endl;}
        else{
            cout << "Areas are not equal." << endl;}
    }
};
Rectangle mergeRectangle(Rectangle r1, Rectangle r2)
{
    Rectangle r3(
        r1.length + r2.length,
        r1.width + r2.width
    );
    return r3;
}
int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(5, 10);
    r1.equalArea(r2);
    Rectangle r3 = mergeRectangle(r1, r2);
    cout << "\nMerged Rectangle:" << endl;
    cout << "Length = " << r3.length << endl;
    cout << "Width = " << r3.width << endl;
    return 0;
}