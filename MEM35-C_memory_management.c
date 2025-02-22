/*
    2. Always Free Allocated Memory
    • CERT Number: MEM35-C
    • Description: Dynamically allocated memory must always be freed when it is 
      no longer needed. Failing to do so can lead to memory leaks, which over time 
      can crash programs or make systems sluggish.
*/

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