#include <stdio.h>

int main() {
    // Loop through all possible combinations of single-digit numbers
    for (int i = 0; i <= 9; ++i) {
        for (int j = i + 1; j <= 9; ++j) {
            // Print the combination of i and j separated by ", "
            putchar('0' + i);   // Convert integer i to its corresponding character
            putchar(',');
            putchar(' ');
            putchar('0' + j);   // Convert integer j to its corresponding character
            putchar(' ');
        }
    }
    putchar('\n');  // Print newline at the end

    return 0;
}
