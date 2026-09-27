#include <iostream>
using namespace std;
class Product
{
public:
    string productName;
    double price;
    int quantity;
    Product(string n, double p, int q)
    {
        productName = n;
        price = p;
        quantity = q;
    }
    Product combine(Product other)
    {
        Product result(
            productName + " + " + other.productName,
            price + other.price,
            quantity + other.quantity
        );
        return result;
    }
};
Product higherValue(Product p1, Product p2)
{
    double value1 = p1.price * p1.quantity;
    double value2 = p2.price * p2.quantity;
    if (value1 > value2)
        return p1;
    else
        return p2;
}
int main()
{
    Product p1("Laptop", 50000, 2);
    Product p2("Phone", 30000, 3);
    Product result = higherValue(p1, p2);
    cout << "Product with Higher Total Value:" << endl;
    cout << "Name: " << result.productName << endl;
    cout << "Price: " << result.price << endl;
    cout << "Quantity: " << result.quantity << endl;
    Product combined = p1.combine(p2);
    cout << "\nCombined Product:" << endl;
    cout << "Name: " << combined.productName << endl;
    cout << "Price: " << combined.price << endl;
    cout << "Quantity: " << combined.quantity << endl;
    return 0;
}