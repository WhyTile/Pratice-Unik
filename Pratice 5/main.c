#include <stdio.h>

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 10000) {
        printf("Invalid input. n must be between 2 and 9999.\n");
        return 1;
    }

    int mod = 12345;
    int dp[10000] = {0};

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i < n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
    }

    printf("Number of valid sequences: %d\n", dp[n-1]);
    return 0;
}
