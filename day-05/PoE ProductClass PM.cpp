#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Product
{
private:
    // Data members
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product()
    {
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // Setter method
    bool setProduct(string name, double p, int quantity)
    {
        if (name == "" || p < 0 || quantity < 0)
        {
            return false;
        }

        productName = name;
        price = p;
        quantityInStock = quantity;

        return true;
    }

    // Getter methods
    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantityInStock()
    {
        return quantityInStock;
    }
};

// Non-member function: GetProductData
// Receives a Product object and populates it with user input
void GetProductData(Product &item)
{
    string name;
    double price;
    int quantity;

    cout << "Enter product name: ";
    getline(cin, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter quantity in stock: ";
    cin >> quantity;

    cin.ignore(1000, '\n');

    if (item.setProduct(name, price, quantity))
    {
        cout << "Product data saved successfully!" << endl;
    }
    else
    {
        cout << "Invalid product information!" << endl;
    }
}

// Non-member function: DisplayProduct
// Receives a Product object and displays its data
void DisplayProduct(Product item)
{
    cout << "\n--- Product Details ---" << endl;
    cout << "Product Name: " << item.getProductName() << endl;
    cout << "Price: R" << item.getPrice() << endl;
    cout << "Quantity in Stock: "
         << item.getQuantityInStock() << endl;
}

// Non-member function: prodCompare
// Receives two products and compares the first characters
// of their names
void prodCompare(Product item1, Product item2)
{
    string name1 = item1.getProductName();
    string name2 = item2.getProductName();

    if (name1.empty() || name2.empty())
    {
        cout << "\nCannot compare: A product name is empty."
             << endl;
        return;
    }

    char first1 = tolower(name1[0]);
    char first2 = tolower(name2[0]);

    if (first1 == first2)
    {
        cout << "\nBoth product names start with the same character."
             << endl;
    }
    else
    {
        cout << "\nThe product names start with different characters."
             << endl;
    }
}

int main()
{
    Product item1;
    Product item2;

    cout << "Enter details for the first product:" << endl;
    GetProductData(item1);

    cout << "\nEnter details for the second product:" << endl;
    GetProductData(item2);

    // Display both products
    DisplayProduct(item1);
    DisplayProduct(item2);

    // Compare the product names
    prodCompare(item1, item2);

    return 0;
}
