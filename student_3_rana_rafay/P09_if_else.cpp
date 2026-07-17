#include <iostream>
using namespace std;

int main() {
    int move;
    cout << "Enter 1 for Left, 2 for Right: ";
    cin >> move;

    if (move == 1) {
        cout << "Moving Left\n";
    } else {
        cout << "Moving Right\n";
    }
    return 0;
}