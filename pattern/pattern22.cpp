#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;


    for(int i = 1; i <= 2*n - 1; i++) {
        for(int j = 1; j <= 2*n - 1; j++) {

            int top = i;
            int left = j;
            int bottom = 2*n - 1 - i + 1;
            int right = 2*n - 1 - j + 1;

            int nDist = min(min(top, bottom), min(left, right));

            cout << n - nDist + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}