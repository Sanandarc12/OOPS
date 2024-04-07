#include <iostream>
#include <cmath>

using namespace std;

// Calculator class
class Calculator {
public:
    // Constructor
    Calculator() {}

    // Addition method
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction method
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication method
    double multiply(double a, double b) {
        return a * b;
    }

    // Division method
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return NAN; // Not a Number
        }
        return a / b;
    }

    // Square root method
    double squareRoot(double a) {
        if (a < 0) {
            cout << "Error! Square root of a negative number." << endl;
            return NAN;
        }
        return sqrt(a);
    }

    // Power method
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Sine method
    double sine(double angle) {
        return sin(angle);
    }

    // Cosine method
    double cosine(double angle) {
        return cos(angle);
    }

    // Factorial method
    int factorial(int n) {
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    }

    // Logarithm method
    double logarithm(double base, double x) {
        if (base <= 0 || base == 1) {
            cout << "Error! Base must be greater than 0 and not equal to 1." << endl;
            return NAN;
        }
        return log(x) / log(base);
    }

    // Tangent method
    double tangent(double angle) {
        return tan(angle);
    }
};

int main() {
    Calculator calc; // Create calculator object

    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /, r(for sqrt), p(for pow), s(for sin), c(for cos), f(for factorial), l(for log), t(for tan)): ";
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^') {
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
    } else if (op == 's' || op == 'c' || op == 'l' || op == 't' || op=='r') {
        cout << "Enter the number: ";
        cin >> num1;
    } else if (op== 'p'){
        cout<< "Enter base and exponent: ";
        cin>> num1>>num2;
    } else if (op == 'f') {
        cout << "Enter the number: ";
        cin >> num1;
    } else {
        cout << "Invalid operator!" << endl;
        return 1;
    }

    switch(op) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        case '^':
            cout << "Result: " << calc.power(num1, num2) << endl;
            break;
        case 'f':
            cout << "Result: " << calc.factorial(num1) << endl;
            break;
        case 'p':
            cout << "Result: " << calc.power(num1,num2) << endl;
            break;
        case 'r':
            cout << "Result: " << calc.squareRoot(num1) << endl;
            break;
        case 's':
            cout << "Result: " << calc.sine(num1) << endl;
            break;
        case 'c':
            cout << "Result: " << calc.cosine(num1) << endl;
            break;
        case 'l':
            double base;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Result: " << calc.logarithm(base, num1) << endl;
            break;
        case 't':
            cout << "Result: " << calc.tangent(num1) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
