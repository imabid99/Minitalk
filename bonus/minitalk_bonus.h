/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:11:43 by imabid            #+#    #+#             */
/*   Updated: 2021/12/10 12:27:40 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <stdlib.h> 
# include <signal.h>

typedef struct s_minitalk
{
	char	c;
	size_t	count;
}	t_minitalk;

size_t	ft_strlen_bonus(const char *s);
void	ft_putstr_bonus(char *s);
void	ft_putnbr_bonus(int nb);
void	ft_putchar_bonus(char c);
int		ft_atoi_bonus(const char *str);

#endif