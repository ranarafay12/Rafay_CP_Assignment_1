#include <iostream>
using namespace std;

int main() {
    int result;
    cout << "Enter 1 for Pass, 2 for Fail: ";
    cin >> result;

    if (result == 1) {
        cout << "Passed\n";
    } else if (result == 2) {
        cout << "Failed\n";
    } else {
        cout << "Invalid Result Code\n";
    }
    return 0;
}