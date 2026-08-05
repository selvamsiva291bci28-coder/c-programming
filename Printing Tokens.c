#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    if (s == NULL) return 1; // Safety check
    
    if (scanf("%[^\n]", s) != 1) {
        free(s);
        return 0;
    }
    
    s = realloc(s, strlen(s) + 1);
    
    // Write your logic to print the tokens of the sentence here.
    // Get the first token using space as the delimiter
    char *token = strtok(s, " ");
    
    // Loop through the rest of the tokens until none are left
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " "); // Pass NULL to continue parsing the same string
    }
    
    // Clean up allocated memory
    free(s);
    
    return 0;
}
