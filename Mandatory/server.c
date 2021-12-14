/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:06:18 by imabid            #+#    #+#             */
/*   Updated: 2021/12/13 11:41:46 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_minitalk	g_all;

static void	get_char(int bit)
{
	g_all.c += ((bit & 1) << g_all.count);
	g_all.count++;
	if (g_all.count == 8)
	{
		ft_putchar(g_all.c);
		if (!g_all.c)
			ft_putchar('\n');
		g_all.c = 0;
		g_all.count = 0;
	}
}

static void	serveur(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr(pid);
	ft_putchar('\n');
}

int	main(void)
{
	serveur();
	while (1)
	{
		signal(SIGUSR2, get_char);
		signal(SIGUSR1, get_char);
		pause();
	}
}
