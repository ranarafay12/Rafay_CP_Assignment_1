#include <iostream>
using namespace std;

int main() {
    int coin;
    cout << "Enter 1 for Heads, 2 for Tails: ";
    cin >> coin;

    if (coin > 0) {
        if (coin < 3) {
            if (coin == 1) {
                cout << "Heads\n";
            } else {
                cout << "Tails\n";
            }
        }
    }
    return 0;
}