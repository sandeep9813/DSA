 #include<stdio.h>

int main() {
    int i, j, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; // Declare the array after getting the value of n

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Insertion sort algorithm
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("The elements after sorting are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
