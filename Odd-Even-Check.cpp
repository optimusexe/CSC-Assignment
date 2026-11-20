// Program to check if a number is Odd or Even
// Name: Babatunde Elijah Opeyemi
// Matric: 250194023
// Department: Educational Technology
#include <iostream>
using namespace std;

int main() {
    long long number;

    cout << "Enter an integer: ";
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a whole number." << endl;
        return 1;
    }

    // A number is even if dividing it by 2 leaves no remainder
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }

    return 0;
}
