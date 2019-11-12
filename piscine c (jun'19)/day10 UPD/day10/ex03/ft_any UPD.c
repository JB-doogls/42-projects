/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i++])
	{
		if (f(tab[i]) == 1)
			return (1);
	}
	return (0);
}

