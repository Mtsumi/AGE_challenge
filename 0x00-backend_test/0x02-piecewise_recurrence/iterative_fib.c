#include <stdio.h>

int iterativeFib(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2;
    int i;

    for (i = 3; i <= n; i++) {
        int temp = c;
        c = c + b;
        b = a;
        a = temp;
    }

    return c;
}

int main() {
    int n = 5;
    int result = iterativeFib(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}
