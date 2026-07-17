#include <iostream>
using namespace std;

int main() {
    int gender;
    cout << "Enter 1 for Male, 2 for Female: ";
    cin >> gender;

    if (gender > 0) {
        if (gender < 3) {
            if (gender == 1) {
                cout << "Male Selected\n";
            } else {
                cout << "Female Selected\n";
            }
        }
    }
    return 0;
}