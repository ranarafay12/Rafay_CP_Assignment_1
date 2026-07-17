#include <iostream>
using namespace std;

int main() {
    int coin;
    cout << "Enter 1 for Heads, 2 for Tails: ";
    cin >> coin;

    if (coin == 1) {
        cout << "Heads\n";
    }
    if (coin == 2) {
        cout << "Tails\n";
    }
    return 0;
}