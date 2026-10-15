#include <iostream>
using namespace std;

int main() {
    int freeplaces;

    do {
        cout << "Enter free places (0-100): ";
        cin >> freeplaces;

        if (freeplaces < 0 || freeplaces > 100) {
            cout << "Error: must be 0-100" << endl;
        }
    } while (freeplaces < 0 || freeplaces > 100);

    int busy = 100 - freeplaces;
    double percent = busy * 1.0;

    cout << "Busy: " << busy << endl;
    cout << "Percent: " << percent << "%" << endl;
    return 0;
}