#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char   *string, int searchChar)
{
    while (*string != '\0')
        {
            if (*string == searchChar)
                return ((char *)string);
            string++;
        }
        return (0);
}
/*
int main()
{
    const char *str = "Bonjour le monde";
    char c = 'z';
    char *result1 = strchr(str, c);
    char *result2 = ft_strchr(str, c);

    printf("%c est a la %lld eme position\n", c, result1 - str);
    printf("%c est a la %lld eme position", c, result2 - str);
}
*/