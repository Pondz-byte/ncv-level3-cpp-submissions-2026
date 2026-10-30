#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name? " << endl;
    getline(cin >>ws,  name);
    cout << "Are you male or female? " << endl;
    getline(cin >>ws,  gender);
    cout << "Hello, " << name << endl;

    if (gender == "M" || gender == "m") {
        cout << " You are handsome." << endl;
    }
     if (gender == "F" || gender == "f"{
        cout << " You are beautiful." << endl;
    }

    return 0;
}
