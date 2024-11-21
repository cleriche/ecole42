#include "libft.h"

/*void	ft_capitalyse(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c -32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h> // Pour printf
#include <stdlib.h> // Pour malloc et free

int main(void)
{
    char str[] = "Je SuiS genTil";

    printf("Avant : %s\n", str);
        
    // Appeler ft_striter avec la fonction ft_capitalyse
    ft_striteri(str, ft_capitalyse);
        
    // Afficher le résultat
    printf("Après: %s\n", str);
    return (0);
}*/

