
#include "libft.h"

char	*ft_strncat(char *dst, const char *s2, size_t n)
{
   size_t ps;
   size_t ct;

   ps = ft_strlen(dst);
   ct = 0;
   while (s2[ct] && (ct < n))
   {
       dst[ps + ct] = s2[ps];
       ct++;
   }
    dst[ps + ct] = '\0';
    return (dst);
}
