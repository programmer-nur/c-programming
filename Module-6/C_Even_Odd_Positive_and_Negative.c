#include <stdio.h>

int main()
{
    int n, x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            positive++;
        }
        else if (x < 0)
        {
            negative++;
        }
        }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}