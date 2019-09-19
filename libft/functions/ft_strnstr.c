
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t ln)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i] && i < ln)
	{
		while (s1[i + j] == s2[j] && s2[j] && (i + j) < ln)
			j++;
		if (!s2[j])
			return ((char*)&s1[i]);
		j = 0;
		i++;
	}
	return (NULL);
}	
