#include <iostream>
using namespace std;

int main() {
    int n, square, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    square = n * n;

    for (int temp = square; temp > 0; temp = temp / 10) {
        sum += temp % 10;
    }

    if (sum == n) {
        cout << n << " is a neon number.";
    } else {
        cout << n << " is not a neon number.";
    }

    return 0;
}
