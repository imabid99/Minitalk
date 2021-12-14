/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:09:55 by imabid            #+#    #+#             */
/*   Updated: 2021/12/13 13:28:56 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static void	send_bit_bonus(int pid, char *s, size_t len)
{
	int		count;
	size_t	i;

	i = 0;
	while (i <= len)
	{
		count = 0;
		while (count < 8)
		{
			if ((s[i] >> count) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			count++;
			usleep(1000);
		}
		i++;
	}
}

void	handler_bonus(int i)
{
	if (i == SIGUSR1)
		ft_putstr_bonus("it's OK\n");
}

int	main(int ac, char **av)
{
	signal(SIGUSR1, handler_bonus);
	if (ac == 3)
		send_bit_bonus(ft_atoi_bonus(av[1]), av[2], ft_strlen_bonus(av[2]));
	else
		ft_putstr_bonus("Usage : ./client <PID>  <STRING> \n");
	return (0);
}
