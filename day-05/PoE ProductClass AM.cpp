#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    // Data members
    string productName;
    double price;
    int quantityInStock;


public:
    //Default constructor
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
   //get methods

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

int main()
{
    Product item;



    if(item.setProduct("Laptop", 12500.50, 10))
    {
        cout<< "Product NAme: "<<item.getProductName()<<endl;
        cout<< "Price: R: "<<item.getPrice()<<endl;
        cout<< "Quantity in Stock: "<<item.getQuantityInStock()<<endl;
        }

        else
    {
        cout<< "Invalid product information!: "<<endl;
    }

return 0;

}



