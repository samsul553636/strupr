#include <stdio.h>

int main()
{
    int r, n;
    char str[300];
    gets(str);

    for (n = 0; str[n] != '\0'; ++n)
        ;
    printf("\nOutput: ");
    for (r = 0; r < n; r++)
    {
        if (str[r] >= 'a' && str[r] <= 'z')
        {
            printf("%c", str[r] - 32);
        }
    }
    return 0;
}
