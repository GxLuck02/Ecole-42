
#include <stddef.h>
#include <stdio.h>

int ft_memcmp (const void *str1, const void *str2, size_t size)
{
    int result;

    while (size > 0)
    {
        if (*(unsigned char*)str1 != *(unsigned char*)str2)
            result = (*(unsigned char*)str1) - (*(unsigned char*)str2);
        str1++;
        str2++;
        size--;
    }
    return (result);
}
/*
int main()
{
    char str1[]= "Le chat noir";
    char str2[]= "Le chat blanc";
    size_t size = 5;

    if ((ft_memcmp(str1, str2, size)) > 0)
        printf("Str 1 superieur a str2");
    else if ((ft_memcmp(str1, str2, size) < 0))
        printf("str1 est plsu petit que str2");
    else
        printf("les %zu octect sont identique", size);
    return (0);
}
*/