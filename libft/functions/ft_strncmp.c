
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t ct;

	ct = 0;
	if ((!s1[ct] && !s2[ct]) || n == 0)
		return (0);
	while (s1[ct] && s2[ct] && s1[ct] == s2[ct] && ct < n - 1)
			ct++;
	return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
}
