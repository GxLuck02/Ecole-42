#include <string.h>
void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    const unsigned char *memB = memoryBlock;
    unsigned char s = searchedChar;
    while (size != 0)
    {
        if (*memB == s)
            return ((void*)memB);
        memB++;
    }
    return (0);
}





