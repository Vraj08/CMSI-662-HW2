#include <stdio.h>

void safe_array_usage() {
    int values[5] = {0}; // Ensuring all elements are initialized
    for (int i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }
}

int main() {
    safe_array_usage();
    return 0;
}