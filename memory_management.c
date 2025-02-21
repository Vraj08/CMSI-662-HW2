#include <stdlib.h>
#include <stdio.h>

void allocate_and_use_memory() {
    int *numbers = (int *)malloc(sizeof(int) * 5);
    if (!numbers) {
        printf("Memory allocation failed!\n");
        return;
    }
    numbers[0] = 42;
    printf("Stored: %d\n", numbers[0]);
    free(numbers); // Freeing allocated memory
}

int main() {
    allocate_and_use_memory();
    return 0;
}