#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size1, size2;

   
    scanf("%d %d", &size1, &size2);

   
    if(size1 != size2) {
        printf("Not Same\n");
        return 0;
    }

    int arr1[size1], arr2[size2];


    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }


    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int sum1 = calculateSum(arr1, size1);
    int sum2 = calculateSum(arr2, size2);

    if(sum1 == sum2) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }
    return 0;
}
