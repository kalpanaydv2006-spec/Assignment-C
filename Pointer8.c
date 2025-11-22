#include <stdio.h>

int main() {
    int x = 10;
    int *p;      // pointer to int
    int **pp;    // pointer to pointer to int

    p = &x;      // p stores address of x
    pp = &p;     // pp stores address of p
   printf("Kalpana Yadav, 125113003\n");
    // Demonstration
    printf("Value of x = %d\n", x);
    printf("Value of x using *p = %d\n", *p);
    printf("Value of x using **pp = %d\n", **pp);

    printf("Address of x = %p\n", (void*)&x);
    printf("Address stored in p = %p\n", (void*)p);
    printf("Address stored in pp = %p\n", (void*)pp);

    return 0;
}
