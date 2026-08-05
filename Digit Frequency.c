#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Allocate memory for a large dynamic string input
    char *s = malloc(1024 * sizeof(char));
    if (scanf("%s", s) != 1) {
        free(s);
        return 0;
    }

    // Initialize an array of size 10 with zeros to store frequencies of 0-9
    int frequency[10] = {0};

    // Traverse the string until the null terminator
    for (int i = 0; s[i] != '\0'; i++) {
        // Check if the character is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            // Subtract character '0' to map it to an array index (0-9)
            frequency[s[i] - '0']++;
        }
    }

    // Print the frequencies separated by spaces
    for (int i = 0; i < 10; i++) {
        printf("%d ", frequency[i]);
    }
    printf("\n");

    free(s);
    return 0;
}
