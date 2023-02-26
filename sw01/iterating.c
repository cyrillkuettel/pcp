#include <stdio.h>


void printNumbersGoto(int n) {
    int i = 0;
    start:
    printf("%d ", i);
    i++;
    if (i <= n) goto start;
    printf("\r\n");
}

void printNumbersFor(int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\r\n");
}


void printNumbersRecursiveFunction(int n) {
    if (n >= 0) {
        printNumbersRecursiveFunction(n - 1);
        printf("%d ", n);
    } else {
        printf("\r\n");
    }
}

void printReverseNumbersRecursiveFunction(int n) {
    if (n >= 0) {
        printf("%d ", n);
        printReverseNumbersRecursiveFunction(n - 1);
    } else {
        printf("\r\n");
    }
}


int main() {
    // printNumbersGoto(7);
    //  printNumbersFor(7);
    //jprintNumbersRecursiveFunction(7);
    printReverseNumbersRecursiveFunction(7);
    
    printf("Done!");
    return 0;
}

