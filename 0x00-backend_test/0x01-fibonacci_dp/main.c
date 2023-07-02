#include <stdio.h>
#include "main.h"

int main(void)
{
    Node *add = makeFunc(ADD, 10, 6);
    Node *mul = makeFunc(MUL, 5, 4);
    Node *sub = makeFunc(SUB, calc(mul), calc(add));
    Node *fibo = makeFunc(FIBO, 6, 0);

    printf("add: %d\n", calc(add));
    printf("mul: %d\n", calc(mul));
    printf("sub: %d\n", calc(sub));
    printf("fibo: %d\n", calc(fibo));

    return (0);
}
