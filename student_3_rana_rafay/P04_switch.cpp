#include <iostream>
using namespace std;

int main() {
    int color;
    cout << "Enter 1 for Red, 2 for Green: ";
    cin >> color;

    switch(color) {
        case 1:
            cout << "Stop\n";
            break;
        case 2:
            cout << "Go\n";
            break;
        default:
            cout << "Invalid Color Code\n";
            break;
    }
    return 0;
}