#include <stdio.h>

int main()
{
    int a, b, ans;
    scanf("%d", &a);
    scanf("%d \n", &b);
    char operations;
    scanf("%c", &operations);

    if (operations == '+') {
        ans = a + b;
    }
    else if (operations == '-' ) {
        ans = a - b;
    }
    else if (operations == '*' ) {
        ans = a * b;
    }
    else if (operations == '/') {
        ans = a / b;
    }
    else if (operations == '%') {
        ans = a % b;
    }
    printf("%d", ans);
}
