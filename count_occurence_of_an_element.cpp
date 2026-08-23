#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 5, 2, 7, 2, 9};
    int element;
    int count = 0;

    cout << "Enter element: ";
    cin >> element;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "Occurrence = " << count;

    return 0;
}
