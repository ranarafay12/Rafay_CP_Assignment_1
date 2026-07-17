#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to Play, 2 to Quit: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Play Game\n";
    } else {
        cout << "Quit Game\n";
    }
    return 0;
}