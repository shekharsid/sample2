#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    std::cout << "Factorial of " << num << " = " << factorial(num) << std::endl;
    return 0;
}
