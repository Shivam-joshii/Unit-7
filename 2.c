//Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

#include <stdio.h>

int main() {
    int arrInt[3] = {10, 20, 30};
    float arrFloat[3] = {1.1, 2.2, 3.3};
    char arrChar[3] = {'X', 'Y', 'Z'};

    int *ip = arrInt;
    float *fp = arrFloat;
    char *cp = arrChar;

    printf("Integer pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", (void*)ip, *ip);
        ip++;
    }

    printf("\nFloat pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %.1f\n", (void*)fp, *fp);
        fp++;
    }

    printf("\nChar pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %c\n", (void*)cp, *cp);
        cp++;
    }

    return 0;
}
