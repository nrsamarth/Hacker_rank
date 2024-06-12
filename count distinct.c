#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int n, i, j, count = 0;
    
   
    scanf("%d", &n);
    
    
    int arr[n];
    
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    for (i = 0; i < n; i++) {
        int isDistinct = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            count++;
        }
    }
    
    
    printf("There are %d distinct element in the array.\n", count);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
