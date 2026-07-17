#include <iostream>
using namespace std;

int main() {
    int tier;
    cout << "Enter 1 for Premium, 2 for Basic: ";
    cin >> tier;

    if (tier == 1) {
        cout << "Premium Tier\n";
    } else if (tier == 2) {
        cout << "Basic Tier\n";
    } else {
        cout << "Invalid Tier Code\n";
    }
    return 0;
}