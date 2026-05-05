// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // TOP HALF
    for(int i = 1; i <= n; i++) {

        // left stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces
        for(int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        // right stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // BOTTOM HALF (fix here)
    for(int i = n - 1; i >= 1; i--) {

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        for(int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}