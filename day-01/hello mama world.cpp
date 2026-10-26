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

    if (gender == "M") {
        cout << " You are handsome." << endl;
    }
     if (gender == "female") {
        cout << " You are beautiful." << endl;
    }



    return 0;
}
