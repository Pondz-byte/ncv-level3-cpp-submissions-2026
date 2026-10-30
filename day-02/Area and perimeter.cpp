#include <iostream>
#include <string>

using namespace std;


int main(){
// declare variables
float length, breadth, area, perimeter;

//Prompt and get output
cout << " Please enter the lenght of the Rectangle \n";
cin >> length;
cout << " Please enter the breadth of the Rectangle \n";
cin >> breadth;
// calculate
area = length * breadth;
perimeter = (length + breadth) * 2;

//display area and perimeter

cout <<" The area of the rectangle is:  " << area << "\n";
cout <<" The perimeter of the rectangle is:  " << perimeter << "\n";

    return 0;

}
