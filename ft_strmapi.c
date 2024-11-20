#include "libft.h"
#include <stdlib.h>

/*char ft_capitalyse(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}*/


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char	*new_s;
	
	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_s = (char *)malloc (sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	new_s[len] = '\0';
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	return (new_s);
}

/*#include <stdio.h> // Pour printf
#include <stdlib.h> // Pour malloc et free

int main(void)
{
    const char *str = "Je SuiS genTil";
    char *result;
    
    // Appeler ft_strmapi avec la fonction ft_capitalyse
    result = ft_strmapi(str, ft_capitalyse);
    if (!result)
    {
        printf("Erreur lors de la transformation.\n");
        return (1);
    }
    
    // Afficher le résultat
    printf("Avant: %s\n", str);
    printf("Après: %s\n", result);

    // Libérer la mémoire
    free(result);
    return (0);
}*/

