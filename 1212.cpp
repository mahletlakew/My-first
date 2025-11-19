#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    // Check for division by zero
    if (num2 == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
    } else {
        double result = x / y;
        cout << "Result: " << result << endl;
    }

    return 0;
}
