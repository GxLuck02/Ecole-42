#include <stdio.h>

int ft_tolower (int character)
{
    if (character >= 'A' && character <= 'Z')
        character = character + 32;
    return (character);
}
/*
int main()
{
    int majuscule;

    majuscule= 'A';
    printf("Avant : %c\n", majuscule);
    printf("Apres : %c\n", ft_tolower(majuscule));

    return 0;
}
 */