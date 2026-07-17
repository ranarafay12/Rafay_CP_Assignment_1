#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter 1 for Small, 2 for Large: ";
    cin >> size;

    switch(size) {
        case 1:
            cout << "Small Coffee\n";
            break;
        case 2:
            cout << "Large Coffee\n";
            break;
        default:
            cout << "Invalid Size Code\n";
            break;
    }
    return 0;
}