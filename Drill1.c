//Create a C program that asks for 5 positive integer. Get the sum and product of even numbers. Provide error if no even numbers provided.
#include <stdio.h>

int main() {   
    int holder[5];
    int sum = 0; 
    int product = 1;
    int CountOfEven = 0;


    printf("Enter 5 positive integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &holder[i]);

    
        if (holder[i] <= 0) {
            printf("Please enter a positive integer.\n");
            i--;
            continue;
        }
    }


    for (int i = 0; i < 5; i++) {
        if (holder[i] % 2 == 0) {
            sum += holder[i];
            product *= holder[i];
            CountOfEven++;
        }
    }


    if (CountOfEven == 0) {
        printf("Error: No even numbers entered.\n");
    } else {
        printf("Sum of even numbers: %d\n", sum);
        printf("Product of even numbers: %d\n", product);
    }
    
    return 0;
}
