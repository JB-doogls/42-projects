/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_calculate(int num1, int num2, char oper)
{
	if (num1 == 0 && oper == '/')
		write(1, "Stop: division by zero", 23);
	else if (num1 == 0 && oper == '%')
		write(1, "Stop: modulo by zero", 20);
	else if (oper == '+')
		ft_putnbr(num1 + num2);
	else if (oper == '-')
		ft_putnbr(num1 - num2);
	else if (oper == '*')
		ft_putnbr(num1 * num2);
	else if (oper == '/')
		ft_putnbr(num1 / num2);
	else if (oper == '%')
		ft_putnbr(num1 % num2);
	write(1, "\n", 1);
}


int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		operator_valid(char *s)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;

	s1 = "+";
	s2 = "-";
	s3 = "*";
	s4 = "/";
	s5 = "%";
	return (!ft_strcmp(s, s1) || !ft_strcmp(s, s2) || !ft_strcmp(s, s3)
		|| !ft_strcmp(s, s4) || !ft_strcmp(s, s5));
}

// int		operator_valid(char *s);
//int		ft_calculate(int, int, char);

int		ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int		main(int argc, char **argv)
{
	int	num1;
	int	num2;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (!operator_valid(argv[2]))
		write(1, "0", 1);
	else if (operator_valid(argv[2]))
		ft_calculate(num1, num2, argv[2][0]);
	return (0);
}

