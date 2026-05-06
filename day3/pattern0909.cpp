//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // TOP HALF
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2*i - 1; k++) cout << "*";
        cout << endl;
    }

    // BOTTOM HALF
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= i; j++) cout << " ";
        for (int k = 1; k <= 2*(n - i) - 1; k++) cout << "*";
        cout << endl;
    }

    return 0;
}