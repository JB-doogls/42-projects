
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destptr;
    unsigned char *srcptr;

    destptr = (unsigned char*)dest;
    srcptr = (unsigned char*)src;
    if ((destptr - srcptr) >= n)
	printf("ptr_arith: %d\n", destptr - srcptr);	// check the result of pointers arithmetics //
	return (NULL);
    while (n--)
	*destptr++ = *srcptr++;
    return (dest);
}
