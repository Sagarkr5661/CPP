#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long fact = factorial(num);
        cout << "Factorial of " << num << " is " << fact << endl;
    }

    return 0;
}
