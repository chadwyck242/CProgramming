// Chapter 3 Programming Project #1
// convert mm /dd/yyyy to yyyymmdd format

#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Please enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%2.2d%2.2d\n", year, month, day);

    return 0;
}