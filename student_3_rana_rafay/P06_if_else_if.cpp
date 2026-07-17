#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter 1 for Small, 2 for Large: ";
    cin >> size;

    if (size == 1) {
        cout << "Small Coffee\n";
    } else if (size == 2) {
        cout << "Large Coffee\n";
    } else {
        cout << "Invalid Size Code\n";
    }
    return 0;
}