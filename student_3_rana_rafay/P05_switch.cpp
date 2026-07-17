#include <iostream>
using namespace std;

int main() {
    int coin;
    cout << "Enter 1 for Heads, 2 for Tails: ";
    cin >> coin;

    switch(coin) {
        case 1:
            cout << "Heads\n";
            break;
        case 2:
            cout << "Tails\n";
            break;
        default:
            cout << "Invalid Coin Face\n";
            break;
    }
    return 0;
}