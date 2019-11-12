/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm-evalexpr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:31:09 by edoll             #+#    #+#             */
/*   Updated: 2019/06/22 23:52:01 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

includes
- define priority 
- define stack1 & stack2
- prototiping (+ ft_stack_size_upper?)

invarioment
- create stack
- resize stack
- pop (ret head_elem, ++)
- peek (ret current-head-elem)



string preparation
- delete spaces 
        ft_strcpy
        ft_strlen

basic loop (eval_expr)
                                        // "7 + 14 % 2 ( -1 -1 + 2)) * 25 / 3 //
    create_stack_num(size -DEFINE)
        var = pointer_malloc_size
    create_stack_oper(size -DEFINE)
        var2 = the-same
while (str)
    if (str = "-" || '0' < str < '9')
        ft_atoi(str)
        push stack num()
    else if (str = "-, +, *, /, %")
        if (!(stack_oper))
        push stack oper
        else 
            if(str > current_head)
            push (stack_oper)
            else if (str = current_head)
            pop(???) \\ peek (????)  (current_head_oper) && pop\peek current_head_num(2-times) 
            & _do-op_
            push (res(do-op))
            else 
                while (str < current_head)
                pop (current_head_oper) && pop\peek current_head_num(2-times)
                & _do-op_
                push (res(do-op))
                elem--
    else if (str == '(' || ')')
        if (str = '(')
        push (stack_oper)
        else (str = ')') 
            while (current_head != '(')
                pop (current_head_oper) && pop\peek current_head_num(2-times)
                & _do-op_
                push (res(do-op))
                elem--
     
