#include <stdio.h>

// Function to find the product of two numbers using recursion
int product(int a, int b) {
    // Base case: If one of the numbers is 0, the product is 0
    if (a == 0 || b == 0)
        return 0;
    // Base case: If one of the numbers is 1, the product is the other number
    else if (a == 1)
        return b;
    else if (b == 1)
        return a;
    // Recursive case: Add 'a' to the product of 'a' and 'b-1'
    else
        return a + product(a, b - 1);
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate the product using the product function
    int result = product(num1, num2);
    
    // Print the result
    printf("Product of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}
