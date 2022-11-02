#include <stdio.h>
int main()
{
    int x, y, i, j;
    char *a1[11] = {"odd", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even"};
    scanf("%d %d", &x, &y);
    for (i = x; i <= y; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
            {
                printf("%s\n", a1[10]);
            }
            else
                printf("%s\n", a1[0]);
        }
        else
            printf("%s\n", a1[i]);
    }
}
