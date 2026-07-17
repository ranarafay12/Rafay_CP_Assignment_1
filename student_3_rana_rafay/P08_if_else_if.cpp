#include <iostream>
using namespace std;

int main() {
    int diff;
    cout << "Enter 1 for Easy, 2 for Hard: ";
    cin >> diff;

    if (diff == 1) {
        cout << "Easy Mode\n";
    } else if (diff == 2) {
        cout << "Hard Mode\n";
    } else {
        cout << "Invalid Difficulty Level\n";
    }
    return 0;
}