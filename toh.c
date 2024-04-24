#include <stdio.h>

// Function to move disks from source to destination using auxiliary tower
void towerOfHanoi(int numDisks, char source, char auxiliary, char destination) {
    if (numDisks == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(numDisks - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", numDisks, source, destination);
    towerOfHanoi(numDisks - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    
    // Input the number of disks from the user
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);
    
    // Call the towerOfHanoi function to solve the problem
    printf("Steps to solve the Tower of Hanoi problem with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    
    return 0;
}
