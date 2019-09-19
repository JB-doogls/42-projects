
#include "libft.h"

char	*ft_strncat(char *dst, const char *s2, size_t n)
{
   size_t ln;

   ln = ft_strlen(dst);
   while (*s2 && n--)
	   dst[ln++] = *s2++;
   dst[ln] = '\0';
   return (dst);
}
