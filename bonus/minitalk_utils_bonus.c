/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:12:49 by imabid            #+#    #+#             */
/*   Updated: 2021/12/10 12:13:22 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putchar_bonus(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen_bonus(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_bonus(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_putnbr_bonus(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_bonus(n + 48);
	}
	else
	{
		ft_putnbr_bonus(n / 10);
		ft_putnbr_bonus(n % 10);
	}
}

int	ft_atoi_bonus(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		s *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r * s);
}
