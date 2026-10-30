#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void calculateSum(double num1, double num2);
void calculateDifference(double num1, double num2);
void calculateProduct(double num1, double num2);
void calculateQuotient(double num1, double num2);

int main()
{
    // Variable declarations
    double number1, number2;
    char operation;

    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers between 1 and 50
    number1 = rand() % 50 + 1;
    number2 = rand() % 50 + 1;

    // Display the generated numbers
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;

    // Prompt the user for a mathematical operator
    cout << "Enter a mathematical operator (+, -, *, /): ";
    cin >> operation;

    // Determine which function to call
    switch (operation)
    {
        case '+':
            calculateSum(number1, number2);
            break;

        case '-':
            calculateDifference(number1, number2);
            break;

        case '*':
            calculateProduct(number1, number2);
            break;

        case '/':
            calculateQuotient(number1, number2);
            break;

        default:
            cout << "Invalid mathematical operation!" << endl;
    }

    return 0;
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
        cout << "Cannot divide by zero!" << endl;
    }
}
