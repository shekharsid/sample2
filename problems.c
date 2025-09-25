#include <stdio.h>

// Function to sum n numbers
int main() {
    int n, i, sum = 0, num;
    printf("Enter the number of integers to sum: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
