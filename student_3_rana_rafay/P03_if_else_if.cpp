#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to Play, 2 to Quit: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Play Game\n";
    } else if (choice == 2) {
        cout << "Quit Game\n";
    } else {
        cout << "Invalid Choice\n";
    }
    return 0;
}