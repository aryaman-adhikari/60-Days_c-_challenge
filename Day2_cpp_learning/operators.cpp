//Wap that demonstrate the operators in c++
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // Arithmetic operators
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    // Relational operators
    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isGreaterThan = (a > b);
    bool isLessThan = (a < b);
    bool isGreaterOrEqual = (a >= b);
    bool isLessOrEqual = (a <= b);

    // Logical operators
    bool logicalAnd = (a > 0 && b > 0);
    bool logicalOr = (a > 0 || b > 0);
    bool logicalNotA = !(a > 0);
    bool logicalNotB = !(b > 0);

    // Assignment operators
    int c = a;
    c += b;
    int d = a;
    d -= b;
    int e = a;
    e *= b;
    int f = a;
    f /= b;
    int g = a;
    g %= b;

    // Increment and decrement operators
    int x = 5;
    x++;
    int y = 10;
    y--;

    cout << "Arithmetic Operators:" << endl;
    cout << "Sum: " << sum << ", Difference: " << difference << ", Product: " << product << ", Quotient: " << quotient << ", Remainder: " << remainder << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "Is Equal: " << isEqual << ", Is Not Equal: " << isNotEqual << ", Is Greater Than: " << isGreaterThan << ", Is Less Than: " << isLessThan << ", Is Greater or Equal: " << isGreaterOrEqual << ", Is Less or Equal: " << isLessOrEqual << endl;

    cout << "\nLogical Operators:" << endl;
    cout << "Logical AND: " << logicalAnd << ", Logical OR: " << logicalOr << ", Logical NOT A: " << logicalNotA << ", Logical NOT B: " << logicalNotB << endl;

    cout << "\nAssignment Operators:" << endl;
    cout << "c += b: " << c << ", d -= b: " << d << ", e *= b: " << e << ", f /= b: " << f << ", g %= b: " << g << endl;

    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "x++: " << x << ", y--: " << y << endl;

    return 0;
}
