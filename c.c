#include <stdio.h>
int main()
{
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);
    if (1900 <= y && y <= 9999)
    {
        if (1 <= m && 12 >= m)
        {
            if ((1 >= d && 31 >= d) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
                printf("date is valid.\n");
            else if ((1 >= d && 30 >= d) && (m == 2 || m == 4 || m == 6 || m == 9 || m == 11))
                printf("date is valid.\n");
            else if ((1 >= d && 28 >= d) && (m == 2))
                printf("date is valid.\n");
            else if (d == 29 && m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
                printf("date is valid.\n");
        }
        else
        {
            printf("Invalid month");
        }
    }
    else
    {
        printf("invalid year");
    }
}