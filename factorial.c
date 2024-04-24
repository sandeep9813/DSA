#include <stdio.h>

// Function to find factorial of a number using recursion
long long int factorial(int n) {
    if (n == 0) // Base case: factorial of 0 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Ensure the number is not negative
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        long long int fact = factorial(number);
        printf("Factorial of %d is %lld\n", number, fact);
    }
    return 0;
}
