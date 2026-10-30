#include <iostream>
using namespace std;

// Function prototypes
void getNumbers(double &num1, double &num2);
void calculateSum(double num1, double num2);
void calculateDifference(double num1, double num2);
void calculateProduct(double num1, double num2);
void calculateQuotient(double num1, double num2);

int main()
{
    // Variable declarations
    double number1, number2;

    // Call functions
    getNumbers(number1, number2);

    calculateSum(number1, number2);
    calculateDifference(number1, number2);
    calculateProduct(number1, number2);
    calculateQuotient(number1, number2);

    return 0;
}

// Function to capture two numbers
void getNumbers(double &num1, double &num2)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

// Function to calculate and display the sum
void calculateSum(double num1, double num2)
{
    cout << "Sum: " << num1 + num2 << endl;
}

// Function to calculate and display the difference
void calculateDifference(double num1, double num2)
{
    cout << "Difference: " << num1 - num2 << endl;
}

// Function to calculate and display the product
void calculateProduct(double num1, double num2)
{
    cout << "Product: " << num1 * num2 << endl;
}

// Function to calculate and display the quotient
void calculateQuotient(double num1, double num2)
{
    if (num2 != 0)
    {
        cout << "Quotient: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Quotient: Cannot divide by zero." << endl;
    }
}
