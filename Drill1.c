//Create a C program that asks for 5 positive integer. Get the sum and product of even numbers. Provide error if no even numbers provided.

#include <stdio.h>

int main() {
    #include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0, product = 1;
    int even_count = 0;

    // Get 5 positive integers from the user
    printf("Enter 5 positive integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Ensure the number is positive
        if (numbers[i] <= 0) {
            printf("Please enter a positive integer.\n");
            i--; // Retry this number
            continue;
        }
    }

    // Process even numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            sum += numbers[i];
            product *= numbers[i];
            even_count++;
        }
    }

    // If no even numbers were entered
    if (even_count == 0) {
        printf("Error: No even numbers entered.\n");
    } else {
        printf("Sum of even numbers: %d\n", sum);
        printf("Product of even numbers: %d\n", product);
    }

    return 0;
}

    
    return 0;
}
