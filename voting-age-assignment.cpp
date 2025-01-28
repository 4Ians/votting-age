#include <iostream>
#include <string>

using namespace std;
int main() {
    string name;
    int age;
    cout << " Enter your name: " << endl;
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 ) {
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not eligible to vote" << endl;
    }
     return 0;
}
