#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    if (scanf("%d", &num) != 1) return 0;
    
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        if (scanf("%d", arr + i) != 1) {
            free(arr);
            return 0;
        }
    }

    /* Write the logic to reverse the array. */
    int start = 0;
    int end = num - 1;
    while (start < end) {
        // Swap elements using a temporary variable
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        
        // Move the pointers toward the center
        start++;
        end--;
    }

    // Print the reversed array
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    // Free dynamically allocated memory
    free(arr);
    
    return 0;
}
