/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[i++])
	{
		if (f(tab[i]) == 1)
			n++;
	}
	return (n);
}

