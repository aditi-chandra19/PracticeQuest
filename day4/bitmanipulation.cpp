// Bit manipulation in C++ means working directly with the **binary (bits)** representation of numbers using special operators. It’s very fast and commonly used in competitive programming, system-level tasks, and optimization problems.

// ---

// ## 🔹 Basic Bitwise Operators in C++

// | Operator | Name        | Description                |
// | -------- | ----------- | -------------------------- |
// | `&`      | AND         | 1 if both bits are 1       |
// | `\|`     | OR          | 1 if at least one bit is 1 |
// | `^`      | XOR         | 1 if bits are different    |
// | `~`      | NOT         | Flips all bits             |
// | `<<`     | Left Shift  | Shifts bits left (×2)      |
// | `>>`     | Right Shift | Shifts bits right (÷2)     |

// ---

// ## 🔹 Example

// ```cpp
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 3;

//     cout << (a & b) << endl;  // AND → 1
//     cout << (a | b) << endl;  // OR  → 7
//     cout << (a ^ b) << endl;  // XOR → 6
//     cout << (~a) << endl;     // NOT → -6
//     cout << (a << 1) << endl; // Left shift → 10
//     cout << (a >> 1) << endl; // Right shift → 2

//     return 0;
// }
// ```

// ---

// ## 🔹 Important Bit Tricks

// ### 1. Check if a number is even or odd

// ```cpp
// if (n & 1)
//     cout << "Odd";
// else
//     cout << "Even";
// ```

// ---

// ### 2. Check if i-th bit is set

// ```cpp
// if (n & (1 << i))
//     cout << "Set";
// else
//     cout << "Not Set";
// ```

// ---

// ### 3. Set i-th bit

// ```cpp
// n = n | (1 << i);
// ```

// ---

// ### 4. Clear i-th bit

// ```cpp
// n = n & ~(1 << i);
// ```

// ---

// ### 5. Toggle i-th bit

// ```cpp
// n = n ^ (1 << i);
// ```

// ---

// ### 6. Count set bits (1s)

// ```cpp
// int count = 0;
// while (n) {
//     count += (n & 1);
//     n >>= 1;
// }
// ```

// 👉 Faster way (built-in):

// ```cpp
// __builtin_popcount(n);
// ```

// ---

// ### 7. Check if number is power of 2

// ```cpp
// if (n > 0 && (n & (n - 1)) == 0)
//     cout << "Power of 2";
// ```

// ---

// ### 8. Remove lowest set bit

// ```cpp
// n = n & (n - 1);
// ```

// ---

