#include <stdio.h>

int main() {
    int n, count = 0;
    char s[51];
    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
