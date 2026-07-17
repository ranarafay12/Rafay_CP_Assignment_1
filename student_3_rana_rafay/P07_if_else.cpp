#include <iostream>
using namespace std;

int main() {
    int tier;
    cout << "Enter 1 for Premium, 2 for Basic: ";
    cin >> tier;

    if (tier == 1) {
        cout << "Premium Tier\n";
    } else {
        cout << "Basic Tier\n";
    }
    return 0;
}