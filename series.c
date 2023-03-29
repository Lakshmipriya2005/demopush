/*#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    printf("%d", a);
    printf("%d", b);
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d", c);
    }
}*/
/*#include <stdio.h>
int main()
{
    int n, i, flag;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        int r = n % i;
        if (r == 0)
        {
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}*/
/*#include <stdio.h>
int main()
{
    int a, b, i, flag;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        int r = a % i;
        if (r == 0)
        {
            flag++;
        }
    }
    if (flag < 2)
    {
        printf("%d", a);
    }
}*/
#include <stdio.h>
int main()
{
    int n, rev, sum, temp;
    scanf("%d", &n);
    n = temp;
    while (temp > 0)
    {
        sum = sum + temp % 10;
        temp /= 10;
    }
    printf("%d", sum);
}
