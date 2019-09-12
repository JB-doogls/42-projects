/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 19:03:35 by edoll             #+#    #+#             */
/*   Updated: 2019/06/20 20:17:24 by edoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# define BUFFER_SIZE 256

# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		input_is_valid(int argc);
int		ft_display_file(char *filename);

#endif
