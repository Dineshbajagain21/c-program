#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum using recursion
    int sum = sumOfNaturalNumbers(n);

    printf("Sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
