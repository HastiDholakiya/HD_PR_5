#include <stdio.h>

int main() {
    int array[10][10];
    int r, c, i, j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\n");
    
    printf("Enter row number: ");
    scanf("%d", &i);
    
    printf("Elements of row %d: ", i);
    for (j = 0; j < c; j++) {
        printf("%d", array[i][j]);
        if (j < c - 1)
            printf(", ");
    }
    printf("\n");
    
    int rowSum = 0;
    for (j = 0; j < c; j++) {
        rowSum += array[i][j];
    }
    printf("The sum of row %d: %d\n", i, rowSum);
    
    printf("\nEnter column number: ");
    scanf("%d", &j);
    
    printf("Elements of column %d: ", j);
    for (i = 0; i < r; i++) {
        printf("%d", array[i][j]);
        if (i < r - 1)
            printf(", ");
    }
    printf("\n");
    
    int colSum = 0;
    for (i = 0; i < r; i++) {
        colSum += array[i][j];
    }
    printf("The sum of column %d: %d\n", j, colSum);
    
}
