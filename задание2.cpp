#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    int evenсount = 0;

    cout << "Enter car numbers (0 to stop): ";
    cin >> number;

    while (number != 0) {
        if (number > 0) {
            count = count + 1;
            if (number % 2 == 0) {
                evenсount = evenсount + 1;
            }
        }

        cin >> number;
    }

    cout << "Correct records: " << count << endl;
    cout << "Even numbers: " << evenсount << endl;
    return 0;
}