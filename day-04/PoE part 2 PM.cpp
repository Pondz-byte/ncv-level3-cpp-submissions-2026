#include <iostream>
using namespace std;

const int SIZE = 5;

// Function prototypes
void populateArray(int arr[], int size);
int countEvenNumbers(int arr[], int size);
void displayOddNumbers(int arr[], int size);
void sortArray(int arr[], int size);
void displaySortedArray(int arr[], int size);

int main()
{
    int numbers[SIZE];

    // Call function to populate the array
    populateArray(numbers, SIZE);

    // Call function to count even numbers
    int evenCount = countEvenNumbers(numbers, SIZE);
    cout << "\nNumber of even numbers: " << evenCount << endl;

    // Call function to display odd numbers
    cout << "\nOdd numbers in the array:\n";
    displayOddNumbers(numbers, SIZE);

    // Call function to sort the array
    sortArray(numbers, SIZE);

    // Call function to display sorted values
    cout << "\nValues sorted in ascending order:\n";
    displaySortedArray(numbers, SIZE);

    return 0;
}

// Function to populate the array
void populateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to count and return even numbers
int countEvenNumbers(int arr[], int size)
{
    int evenCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    return evenCount;
}

// Function to display only odd numbers
void displayOddNumbers(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << endl;
        }
    }
}

// Function to sort the array in ascending order
void sortArray(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the sorted array
void displaySortedArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
