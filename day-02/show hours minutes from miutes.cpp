#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
// declare and assign
int minutes = 0;
int hours = 0;
int minutes_input = 0;
int sec_temp = 0;

int main() {

    // calculate number of minutes
    cout << "Input a number of munutes ";
    cin >> minutes_input;

    sec_temp = minutes_input % 60;
    hours = minutes_input / 60;
// Display num
    cout << "it is " << hours << " and " << sec_temp << " minutes" << "/n";


return 0;
}
