#include <stdio.h>

int recursiveFib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return recursiveFib(n - 3) + recursiveFib(n - 2);
}

int main() {
    int n = 2;
    int result = recursiveFib(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}
