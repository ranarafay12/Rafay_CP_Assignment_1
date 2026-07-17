#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to Play, 2 to Quit: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Play Game\n";
    }
    if (choice == 2) {
        cout << "Quit Game\n";
    }
    return 0;
}