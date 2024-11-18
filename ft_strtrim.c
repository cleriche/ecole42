#include "libft.h"



char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_s;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return ((char *)s1);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
   
    new_s = (ft_substr(s1, start, end - start));
    return (new_s);
}

