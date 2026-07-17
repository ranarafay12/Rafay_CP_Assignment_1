#include <iostream>
using namespace std;

int main() {
    int diff;
    cout << "Enter 1 for Easy, 2 for Hard: ";
    cin >> diff;

    if (diff == 1) {
        cout << "Easy Mode\n";
    }
    if (diff == 2) {
        cout << "Hard Mode\n";
    }
    return 0;
}