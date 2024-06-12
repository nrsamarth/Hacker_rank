#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    // Print the results
    printf("The sum of the even numbers in the array is %d\n", evenSum);
    printf("The sum of the odd numbers in the array is %d\n", oddSum);
    
    return 0;
}
