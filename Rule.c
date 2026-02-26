#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    int div2 = (num % 2 == 0);

    temp = num;
    while (temp > 70) {
        int last = temp % 10;
        temp = temp / 10 - 2 * last;
    }

    int div7 = (temp % 7 == 0);

    if (div2 && div7)
        printf("%d is divisible by 14", num);
    else
        printf("%d is not divisible by 14", num);

    return 0;
}
