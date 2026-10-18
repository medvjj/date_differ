#include <stdio.h>

int main(void) {
    int day, month;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter a date in 2026 (day and month, for example 15 7): ");

    if (scanf("%d %d", &day, &month) != 2) {
        printf("Input error.\n");
        return 1;
    }

    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1]) {
        printf("Invalid date.\n");
        return 1;
    }

    int dayOfYear = day;
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }

    /* July 1 — the 182nd day of 2026 */
    int difference = dayOfYear - 182;

    printf("Days elapsed since July 1st: %d\n", difference);

    return 0;
}
