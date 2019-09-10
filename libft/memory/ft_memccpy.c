
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *destptr;
    unsigned char *srcptr;
    int i;

    destptr = (unsigned char*)dest;
    srcptr = (unsigned char*)src;
    i = 0;
    while (i < n)
	{
	    if (((*destptr + i) == src) || ((*srcptr + i) == dest))   // overlap //
		return (NULL);
	    *destptr++ = *srcptr++;
	    if (*destptr == (unsigned char)c)
		return (dest);			    //dest or destptr? //
	    i++;
	}
    return (dest);
}




//    if ((destptr - srcptr) >= n)
//    {
//	printf("ptr arth res: %d\t" "res >= n: %d\t" "n: %d\n", \
	    (destptr - srcptr), ((destptr - srcptr) >= n), n);
//	return (NULL);
//    }
//    else
//    {


//	while (n--)
//	{
    //	*srcptr != (unsigned char)c)
//	    *destptr++ = *srcptr++;
//	    if (*srcptr == (unsigned char)c)
//		return (dest);
//	}
//    }
//	return (dest);
//}
