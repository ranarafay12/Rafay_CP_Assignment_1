#include <iostream>
using namespace std;

int main() {
    int tier;
    cout << "Enter 1 for Premium, 2 for Basic: ";
    cin >> tier;

    switch(tier) {
        case 1:
            cout << "Premium Tier\n";
            break;
        case 2:
            cout << "Basic Tier\n";
            break;
        default:
            cout << "Invalid Tier Code\n";
            break;
    }
    return 0;
}