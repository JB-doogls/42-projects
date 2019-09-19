
#include "libft.h"

int		ft_atoi(const char *pt)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*pt && (*pt == ' ' || *pt == '\n' || *pt == '\t' ||
			*pt == '\v' || *pt =='\f' || *pt == '\r'))
		*pt++;
	if (*pt == '-')
		sign = -1;
	if (*pt == '-' || *pt == '+')
		*pt++;
	while (*pt && *pt >= '0' && *pt <= '9')
	{
		res = res * 10 + (*pt - '0');
		*pt++;
	}
	return (res * sign);
}	
