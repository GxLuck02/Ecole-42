#include <stdio.h>

int ft_toupper (int character)
{
    if (character >= 'a' && character <= 'z')
        character = character - 32;
    return (character);
}
/*
int main()
{
    int minuscule;

    minuscule = 'A';
    printf("Avant : %c\n", minuscule);
    printf("Apres : %c\n", ft_toupper(minuscule));

    return 0;
}
 */