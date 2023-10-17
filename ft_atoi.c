#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *string)
{
    int result = 0;
    int sign = 1;

    while ((*string >= 9 && *string <= 13) || *string == 32)
    {
        string++;
    }
    if (*string == '-')
    {
        sign = -1;
        string++;
    }
    while (*string >= '0' && *string <= '9')
    {
        result = (result * 10 + (*string - 48));
        string++;
    }
    return (sign * result);
}

/*
int main() {
    char str[] = "!12345";
    int num = atoi(str);
    int num2 = ft_atoi(str);
    printf("La valeur entiere est : %d\n", num);
    printf("La valeur entiere est : %d\n", num2);
    return 0;
}
*/