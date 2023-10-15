#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char   *string, int searchChar)
{
    const   char    *lastocurrence;

    lastocurrence = 0;
    while (*string != '\0')
    {
        if (*string == searchChar)
            lastocurrence = string;
        string++;
    }
    return ((char*)lastocurrence);
}
/*
int main()
{
    const char *str = "Bonjour le monde";
    char c = 'z';
    char *result1 = strchr(str, c);
    char *result2 = ft_strrchr(str, c);

    printf("%c est a la %lld eme position\n", c, result1 - str);
    printf("%c est a la %lld eme position", c, result2 - str);
}
 */