#include <iostream>
using namespace std;

int main() {
    int result;
    cout << "Enter 1 for Pass, 2 for Fail: ";
    cin >> result;

    switch(result) {
        case 1:
            cout << "Passed\n";
            break;
        case 2:
            cout << "Failed\n";
            break;
        default:
            cout << "Invalid Result Code\n";
            break;
    }
    return 0;
}