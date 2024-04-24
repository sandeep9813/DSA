 #include<stdio.h>

int b_search(int a[], int l, int h, int key) {
    int mid;
    if (l > h) {
        return -1; // Return -1 if key is not found
    }
    mid = (l + h) / 2;
    if (key < a[mid]) {
        return b_search(a, l, mid - 1, key); // Return the result of the recursive call
    }
    else if (key > a[mid]) {
        return b_search(a, mid + 1, h, key); // Return the result of the recursive call
    }
    else {
        return mid; // Return the index if key is found
    }
}

int main() {
    int a[100], n, i, l, h, key, loc;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) { // Fix the syntax error in the loop condition
        scanf("%d", &a[i]);
    }
    printf("Enter the search key: ");
    scanf("%d", &key);
    l = 0;
    h = n - 1;
    loc = b_search(a, l, h, key);
    if (loc != -1) { // Check if key is found
        printf("Key %d is at location %d\n", key, loc);
    }
    else {
        printf("Key %d not found\n", key);
    }
    return 0;
}
