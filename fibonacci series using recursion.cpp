#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void displayFibonacciSeries(int count) {
    for (int i = 0; i < count; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int count;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> count;

    if (count <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
    } else {
        cout << "Fibonacci series up to " << count << " terms: ";
        displayFibonacciSeries(count);
    }

    return 0;
}
