#include<stdio.h>

int main() {
    int a[100], n, i, j, temp, min;
    
   
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("\nSorting an array using selection sort...\n");
    
    
    for (i = 0; i < n - 1; i++) {
        min = i; 
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j; 
            }
        }
        
        
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }
 
    return 0;
}