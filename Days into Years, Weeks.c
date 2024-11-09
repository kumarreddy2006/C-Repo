#include <stdio.h>

int main() {
    // Declare variable for the number of days (D)
    int D;
    
    // Read the number of days
    scanf("%d", &D);

    // Calculate the number of full years (365 days in a year)
    int years = D / 365;
    
    // Calculate the remaining days after converting to full years
    int remaining_days = D % 365;
    
    // Calculate the number of full weeks from the remaining days (7 days in a week)
    int weeks = remaining_days / 7;

    // Output the number of years and weeks
    printf("%d\n", years);
    printf("%d\n", weeks);

    return 0;
}
