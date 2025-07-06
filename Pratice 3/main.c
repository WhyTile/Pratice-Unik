#include <stdio.h>

int main() {
    int p;
    printf("Enter the number of digits: ");
    scanf("%d", &p);

    if (p < 1 || p > 30) {
        printf("Invalid input. p must be between 1 and 30.\n");
        return 1;
    }

    long long dp[31][3] = {0};

    dp[1][1] = 2;
    for (int i = 2; i <= p; i++) {
        dp[i][1] = dp[i - 1][1] + dp[i - 1][2];

        dp[i][2] = dp[i - 1][1];
    }

    long long total = dp[p][1] + dp[p][2];
    printf("Number of valid %d-digit numbers: %lld\n", p, total);

    return 0;
}
