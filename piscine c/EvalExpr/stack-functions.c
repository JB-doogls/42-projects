/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:30:45 by edoll             #+#    #+#             */
/*   Updated: 2019/06/23 05:55:40 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h" 

t_opstack	*create_stack()
{
    t_opstack *out;	

    if (!(out = (t_opstack *)malloc(sizeof(t_opstack))))
        return (NULL);
    out->size = INIT_SIZE;
    if (!(out->data = (t_opstack *)malloc(out->size * sizeof(int))))
    {
        free(out);
        return (NULL);
    }
    out->top = 0;
    return (out);
}

void	push(t_opstack *stack, char  value)
{
    if (_opstack->top >= t_opstack->size)
    {
        ft_putchar("Stack Overflow");
        return;
    }
    t_opstack->data[t_opstack->top] = value;
    t_opstack->top++;
}

int	pop(t_opstack *stack)
{
    if (t_opstack->top == 0)
        return (NULL);
    t_opstack->top--;
    return (t_opstack->data[t_opstack->top]);
}
