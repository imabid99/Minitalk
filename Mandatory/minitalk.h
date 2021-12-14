/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:02:43 by imabid            #+#    #+#             */
/*   Updated: 2021/12/13 11:41:41 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h> 
# include <signal.h>

typedef struct s_minitalk
{
	char	c;
	size_t	count;
}	t_minitalk;

size_t	ft_strlen(const char *s);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_atoi(const char *str);

#endif