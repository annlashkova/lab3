#include <iostream>
using namespace std;

int main() {
    int levels, places;

    cout << "Enter levels (1-6): ";
    cin >> levels;
    cout << "Enter places (1-6): ";
    cin >> places;

    if (levels < 1 || levels > 6 || places < 1 || places > 6) {
        cout << "Error: values must be 1-6" << endl;
        return 0;
    }

    for (int i = 1; i <= levels; i++) {
        for (int j = 1; j <= places; j++) {
            cout << "L" << i << "-P" << j << endl;
        }
    }

    return 0;
}