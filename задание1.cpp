#include <iostream>
using namespace std;

int main() {
    int n;
    double total = 0;

    cout << "Enter hours (1-24): ";
    cin >> n;

    if (n < 1 || n > 24) {
        cout << "Error: hours must be 1-24" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        double cost;
        if (i <= 3) {
            cost = 3;
        }
        else {
            cost = 2;
        }
        cout << "Hour " << i << ": " << cost << endl;
        total = total + cost;
    }

    cout << "Total: " << total << endl;
    return 0;
}