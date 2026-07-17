#include <iostream>
using namespace std;

int main() {
    int light;
    cout << "Enter 1 for On, 0 for Off: ";
    cin >> light;

    switch(light) {
        case 1:
            cout << "Light is On\n";
            break;
        case 0:
            cout << "Light is Off\n";
            break;
        default:
            cout << "Invalid Input\n";
            break;
    }
    return 0;
}