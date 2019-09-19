
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s2[j])
			j++;
		if (!s2[j])
			return ((char*)&s1[i]);
		j = 0;
		i++;
	}
	return (NULL);
}			
