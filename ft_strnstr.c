#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char  *string, const char  *needle, size_t len)
{
    while (*string != '\0' && len > 0)
    {
        const char *temp_string;
        const char *temp_needle;

        temp_string = string;
        temp_needle = needle;
        while (*temp_string == *temp_needle && *temp_needle != '\0')
        {
            temp_string++;
            temp_needle++;
            len--;
        }
        if (*temp_needle == '\0')
            return((char *)string);
        string++;
        len--;
    }
    return(0);
}
/*
int main()
{
    char    str1[]= "Je suis un jeune suisse";
    char    str2[]= "suisse";
    size_t size= 24;

    char *result = ft_strnstr(str1, str2, size);

    if (result != NULL) {
        printf("La chaine %s a ete trouvee a l'index %lld\n", str2, result - str1);
    } else {
        printf("La chaine %s n'a pas ete trouvee\n", str2);
    }

    return 0;
}
*/