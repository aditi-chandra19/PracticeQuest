#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;
    if(n<=1) cout<<n<<"is not prime";

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count>0) {
        cout << n << " is not prime number.";
    } else {
        cout << n << " is prime number.";
    }

    return 0;
}
