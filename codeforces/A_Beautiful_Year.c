#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);
    int next_year = y + 1;
    while (1) {
        int temp = next_year;
        int digits[10] = {0}; 
        int is_distinct = 1;
        while (temp > 0) {
            int digit = temp % 10;
            if (digits[digit]++) {
                is_distinct = 0;
                break;
            }
            temp /= 10;
        }
        if (is_distinct) {
            printf("%d\n", next_year);
            break;
        }
        next_year++;
    }
    return 0;
}