#include <iostream>
using namespace std;
int main()
{
    // 1. Arithmetic Operators
    int a = 10, b = 5;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;
    // 2. Relational Operators
    cout << "Equal to: " << (a == b) << endl;
    cout << "Not equal to: " << (a != b) << endl;
    cout << "Greater than: " << (a > b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Greater than or equal to: " << (a >= b) << endl;
    cout << "Less than or equal to: " << (a <= b) << endl;
    // 3. Logical Operators
    cout << "Logical AND: " << (a > 0 && b > 0) << endl;
    cout << "Logical OR: " << (a > 0 || b < 0) << endl;
    cout << "Logical NOT: " << !(a > 0) << endl;
    // 4. Assignment Operators
    int c = 10;
    cout << "Assignment: " << c << endl;
    cout << "Addition Assignment: " << (c += 5) << endl;
    cout << "Subtraction Assignment: " << (c -= 3) << endl;
    cout << "Multiplication Assignment: " << (c *= 2) << endl;
    cout << "Division Assignment: " << (c /= 4) << endl;
    cout << "Modulus Assignment: " << (c %= 3) << endl;
    cout << "Final value of c: " << c << endl;
    // 5. Increment and Decrement Operators
    int d = 5;
    cout << "Pre Increment: " << ++d << endl;
    cout << "Post Increment: " << d++ << endl;
    cout << "Pre Decrement: " << --d << endl;
    cout << "Post Decrement: " << d-- << endl;
    cout << "Final value of d: " << d << endl;
    // 6. Bitwise Operators
    int e = 5, f = 3;
    cout << "Bitwise AND: " << (e & f) << endl;
    cout << "Bitwise OR: " << (e | f) << endl;
    cout << "Bitwise XOR: " << (e ^ f) << endl;
    cout << "Bitwise NOT: " << (~e) << endl;
    cout << "Left Shift: " << (e << 1) << endl;
    cout << "Right Shift: " << (e >> 1) << endl;
    cout << "Final value of e: " << e << endl;
    // 7. Conditional Operator
    int g = 10, h = 20;
    int max = (g > h) ? g : h;
    cout << "Maximum value: " << max << endl;
}
