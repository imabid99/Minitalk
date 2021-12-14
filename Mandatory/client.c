/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:00:35 by imabid            #+#    #+#             */
/*   Updated: 2021/12/13 12:11:16 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_bit(int pid, char *s, size_t len)
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

int	main(int ac, char **av)
{
	if (ac == 3)
		send_bit(ft_atoi(av[1]), av[2], ft_strlen(av[2]));
	else
		ft_putstr("Usage : ./client <PID>  <STRING> \n");
	return (0);
}
