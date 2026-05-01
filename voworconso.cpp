#include<iostream>
using namespace std;

int main() {
   char ch;

    cout << "Enter ch (a-z): ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "vowel" << endl;
            break;
        default:
            cout << "its consonent" << endl;
    }

    return 0;
}
