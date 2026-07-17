#include <iostream>
using namespace std;

int main() {
    int color;
    cout << "Enter 1 for Red, 2 for Green: ";
    cin >> color;

    if (color == 1) {
        cout << "Stop\n";
    } else {
        cout << "Go\n";
    }
    return 0;
}