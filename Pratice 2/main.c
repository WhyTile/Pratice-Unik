#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[20];
    printf("Enter %d natural numbers separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = nums[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, nums[i]);
    }

    printf("Least Common Multiple: %d\n", result);
    return 0;
}
