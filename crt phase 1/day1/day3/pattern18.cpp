// E
// D E
// C D E
// B C D E
// A B C D E

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + n - i;

        for (char j = ch; j <= 'A' + n - 1; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
