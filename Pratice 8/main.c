#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);
    int length = strlen(word);
    int count[256] = {0};
    for (int i = 0; i < length; i++)
        count[(unsigned char)word[i]]++;
    unsigned long long total = factorial(length);
    for (int i = 0; i < 256; i++)
        if (count[i] > 1)
            total /= factorial(count[i]);
    printf("Number of anagrams: %llu\n", total);
    return 0;
}
