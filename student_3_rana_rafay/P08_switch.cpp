#include <iostream>
using namespace std;

int main() {
    int diff;
    cout << "Enter 1 for Easy, 2 for Hard: ";
    cin >> diff;

    switch(diff) {
        case 1:
            cout << "Easy Mode\n";
            break;
        case 2:
            cout << "Hard Mode\n";
            break;
        default:
            cout << "Invalid Difficulty Level\n";
            break;
    }
    return 0;
}