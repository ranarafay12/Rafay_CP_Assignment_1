#include <iostream>
using namespace std;

int main() {
    int gender;
    cout << "Enter 1 for Male, 2 for Female: ";
    cin >> gender;

    switch(gender) {
        case 1:
            cout << "Male Selected\n";
            break;
        case 2:
            cout << "Female Selected\n";
            break;
        default:
            cout << "Invalid Selection\n";
            break;
    }
    return 0;
}