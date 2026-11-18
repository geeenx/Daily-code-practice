#include <stdio.h>

int main() {
    // --- Question 1: Exam Eligibility ---
    int attendance;
    float avg_marks;

    printf("=== Question 1: Exam Eligibility ===\n");
    printf("Enter student attendance percentage: ");
    scanf("%d", &attendance);
    printf("Enter student average marks: ");
    scanf("%f", &avg_marks);

    if (attendance >= 75 && avg_marks >= 40) {
        printf("Eligible for final exams.\n\n");
    } else {
        printf("Not eligible.\n\n");
    }

    // --- Question 2: Water Bill Calculator ---
    int units;
    float bill = 0.0;

    printf("=== Question 2: Water Bill Calculator ===\n");
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    printf("Total water bill: %.2f KES\n\n", bill);

    // --- Question 3 & 4: Mobile Data Bundle Purchase ---
    int choice;
    printf("=== Question 3: Mobile Data Bundle Purchase ===\n");
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected 100MB, Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB, Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB, Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB, Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
