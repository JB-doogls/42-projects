
#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *s2, size_t size)
{
	size_t ln;
	size_t ct;

	ln = 0;
	while (dst[ln] && ln < size)
		ln++;
	ct = ln;
	while (s2[ln - ct] && ln + 1 < size)
	{
		dst[ln] = s2[ln - ct];
		ln++;
	}
	if (ct < size)
		dst[ln] = '\0';
		return (ct + ft_strlen(s2));
}	
