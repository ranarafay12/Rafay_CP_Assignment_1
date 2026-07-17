#include <iostream>
using namespace std;

int main() {
    int move;
    cout << "Enter 1 for Left, 2 for Right: ";
    cin >> move;

    switch(move) {
        case 1:
            cout << "Moving Left\n";
            break;
        case 2:
            cout << "Moving Right\n";
            break;
        default:
            cout << "Invalid Move Code\n";
            break;
    }
    return 0;
}