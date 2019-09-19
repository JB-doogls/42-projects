
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == (char)c)
			return ((char*)&s[i - (j - 1)]);
	return (NULL);
}
