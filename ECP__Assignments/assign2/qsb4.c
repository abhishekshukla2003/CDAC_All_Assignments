#include <stdio.h>

int main() {
    int day, month, year;
    int h, q, m, k, j;

    // Input date
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Zeller’s adjustment: Jan and Feb are counted as months 13 and 14 of previous year
    if (month == 1) {
        month = 13;
        year--;
    } else if (month == 2) {
        month = 14;
        year--;
    }

    q = day;
    m = month;
    k = year % 100;     
    j = year / 100; 
    

    
    h = (q + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;

    
    switch (h) {
        case 0: printf("Day of week: Saturday\n"); break;
        case 1: printf("Day of week: Sunday\n"); break;
        case 2: printf("Day of week: Monday\n"); break;
        case 3: printf("Day of week: Tuesday\n"); break;
        case 4: printf("Day of week: Wednesday\n"); break;
        case 5: printf("Day of week: Thursday\n"); break;
        case 6: printf("Day of week: Friday\n"); break;
        default: printf("Error in calculation!\n");
    }

    return 0;
}

