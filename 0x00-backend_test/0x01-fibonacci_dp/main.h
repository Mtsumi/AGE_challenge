#ifndef MAIN_H
#define MAIN_H

typedef enum TypeTag
{
    ADD,
    SUB,
    MUL,
    DIV,
    FIBO
} TypeTag;

typedef struct Node {
    TypeTag type;
    int leftValue;
    int rightValue;
} Node;

Node* makeFunc(TypeTag type, int leftValue, int rightValue);
int fibonacci(int n);
int calc(Node* node);

#endif
