#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 to Play, 2 to Quit: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Play Game\n";
            break;
        case 2:
            cout << "Quit Game\n";
            break;
        default:
            cout << "Invalid Choice\n";
            break;
    }
    return 0;
}