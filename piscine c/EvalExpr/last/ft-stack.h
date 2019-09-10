/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:29:30 by edoll             #+#    #+#             */
/*   Updated: 2019/06/23 05:55:37 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# define INIT_SIZE 4096
# define PRIOR_L 1
# define PRIOR_M 2
# define PRIOR_H 3

#include <unistd.h>
#include <stdlib.h>

typedef struct      s_stack_operator
{
    char            data;
    size_t          size;
    size_t          top;
}                   t_opstack;      

void		ft_putchar(char c);
void		ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char		*ft_erase_spaces(char *str);
int		eval_expr(char *str);
void		push(t_opstack *stack, int value);
int		pop(t_opstack *stack);
int		prior(char op);

#endif
