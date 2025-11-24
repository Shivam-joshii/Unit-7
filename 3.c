//	Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void modifyValues(int *a, float *b, char *c) {
    *a = 100;
    *b = 9.99;
    *c = 'Z';
}

int main() {
    int x = 5;
    float y = 1.1;
    char z = 'A';

    printf("Before modification: x=%d, y=%.2f, z=%c\n", x, y, z);

    modifyValues(&x, &y, &z);

    printf("After modification: x=%d, y=%.2f, z=%c\n", x, y, z);

    return 0;
}
