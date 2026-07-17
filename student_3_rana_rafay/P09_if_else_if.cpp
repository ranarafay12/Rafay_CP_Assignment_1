#include <iostream>
using namespace std;

int main() {
    int move;
    cout << "Enter 1 for Left, 2 for Right: ";
    cin >> move;

    if (move == 1) {
        cout << "Moving Left\n";
    } else if (move == 2) {
        cout << "Moving Right\n";
    } else {
        cout << "Invalid Move Code\n";
    }
    return 0;
}