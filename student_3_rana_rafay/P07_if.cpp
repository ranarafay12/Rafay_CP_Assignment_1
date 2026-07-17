#include <iostream>
using namespace std;

int main() {
    int tier;
    cout << "Enter 1 for Premium, 2 for Basic: ";
    cin >> tier;

    if (tier == 1) {
        cout << "Premium Tier\n";
    }
    if (tier == 2) {
        cout << "Basic Tier\n";
    }
    return 0;
}