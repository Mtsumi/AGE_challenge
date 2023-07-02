#include "main.h"
#include <stdlib.h>

Node* makeFunc(TypeTag type, int leftValue, int rightValue) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->leftValue = leftValue;
    node->rightValue = rightValue;
    return node;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;
    int fib;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int calc(Node* node) {
    if (node == NULL) {
        return 0;
    }

    switch (node->type) {
        case ADD:
            return node->leftValue + node->rightValue;
        case SUB:
            return node->leftValue - node->rightValue;
        case MUL:
            return node->leftValue * node->rightValue;
        case DIV:
            return node->leftValue / node->rightValue;
        case FIBO:
            int n = 0;  
            
            if (node->leftValue >= 0) {
                n = node->leftValue;
            }

            return fibonacci(n);
    }

    return 0;
}
