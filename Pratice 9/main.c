#include <stdio.h>

int minSteps(int x, int y) {
    int d = y - x;
    int steps = 0;
    while (1) {
        steps++;
        int k = steps / 2;
        int sum;
        if (steps % 2 == 0)
            sum = k * (k + 1);
        else
            sum = (k + 1) * (k + 1);
        if (sum >= d)
            return steps;
    }
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("Minimum steps: %d\n", minSteps(x, y));
    return 0;
}
