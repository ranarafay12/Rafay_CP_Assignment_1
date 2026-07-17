#include <iostream>
using namespace std;

int main() {
    int light;
    cout << "Enter 1 for On, 0 for Off: ";
    cin >> light;

    if (light >= 0) {
        if (light <= 1) {
            if (light == 1) {
                cout << "Light is On\n";
            } else {
                cout << "Light is Off\n";
            }
        }
    }
    return 0;
}