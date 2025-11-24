//Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
//Print the values of both the pointers and the variables they point to.
#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';

    int *ip = &i;
    float *fp = &f;
    char *cp = &c;

    printf("int variable value: %d, pointer address: %p, value via pointer: %d\n", i, (void*)ip, *ip);
    printf("float variable value: %.2f, pointer address: %p, value via pointer: %.2f\n", f, (void*)fp, *fp);
    printf("char variable value: %c, pointer address: %p, value via pointer: %c\n", c, (void*)cp, *cp);

    return 0;
}
