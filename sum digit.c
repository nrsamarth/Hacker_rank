#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int sumOfDigits(int n) {
     int sum=0;
     while (n > 0) {
        sum += n % 10;
        n /= 10;
 }
     return sum;
 }
int main() {
   
    int n;
    int result;
        scanf("%d", &n);
        result = n;
    while (result >= 10) {
        result = sumOfDigits(result);
    }

    // Print the result
    printf("%d\n", result);

    
    

    
    return 0;
}
