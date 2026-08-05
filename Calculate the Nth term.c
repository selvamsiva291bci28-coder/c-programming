#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.
int find_nth_term(int n, int a, int b, int c) {
    // Base cases returning the initial values of the sequence
    if (n == 1) {
        return a;
    }
    if (n == 2) {
        return b;
    }
    if (n == 3) {
        return c;
    }
    
    // Recursive step: sum of the three previous terms
    return find_nth_term(n - 1, a, b, c) + 
           find_nth_term(n - 2, a, b, c) + 
           find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    if (scanf("%d %d %d %d", &n, &a, &b, &c) == 4) {
        int ans = find_nth_term(n, a, b, c);
        printf("%d", ans); 
    }
 
    return 0;
}
