#include <iostream>
using namespace std;

int main() {
    int color;
    cout << "Enter 1 for Red, 2 for Green: ";
    cin >> color;

    if (color == 1) {
        cout << "Stop\n";
    } else if (color == 2) {
        cout << "Go\n";
    } else {
        cout << "Invalid Color Code\n";
    }
    return 0;
}