/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval-expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:30:05 by edoll             #+#    #+#             */
/*   Updated: 2019/06/23 05:55:33 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	prior(char op)
{
	if (op == '(')
	  return (1);
	if (op == '+' || op == '-')
	  return (2);
	if (op == '*'|| op == '/' || op == '%')
	  return (3);
	else
	  return (0);
}

void	convert(char *str, char *s_out)
{
	int crt;
	
	crt = 0;
	while (str[crt])
	{
	    if (str[crt] >= 0 && str[crt] <= 9)
		s_out++ = str[crt++];
		continue;
	    else if (str[crt] == '(')
		{
		    push(t_opstack->top, str[crt]);
		    str[crt++];
		    break;
		}
	    else if ((str[crt] == '*' || str[crt] == '/' || str[crt] == '%'
		    || str[crt] == '+' || str[crt] == '-') && t_opstack->top = 0)
		{
			while (prior(crt) <= prior(t_opstack->top))
			    s_out++ = pop(t_opstack->top);
			if (prior(crt) > prior(t_opstack->top)
			    push(t_opstack, crt);
			crt++;
			break;
		    }
		}
	    else if (str[crt] == ')' && t_opstack->top != 0)
	    {
		while ((crt = pop(t_opstack->top)) != '(')
		    ++s_out = crt;
	    }
		    break;
	}
	while (t_opstack->top != 0)
	    ++s_out = pop(t_opstack->top);
}

int	eval_expr(char *str)
{
    char *s_output;

    ft_erase_spaces(str);
    convert(str, s_output) 

}



int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	} 
	return (0);
}   
