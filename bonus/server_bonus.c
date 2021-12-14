/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:14:24 by imabid            #+#    #+#             */
/*   Updated: 2021/12/11 14:14:37 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

t_minitalk	g_all;

static void	get_char_bonus(int bit, siginfo_t *info, void *context)
{
	(void)context;
	g_all.c += ((bit & 1) << g_all.count);
	g_all.count++;
	if (g_all.count == 8)
	{
		ft_putchar_bonus(g_all.c);
		if (!g_all.c)
		{
			kill(info->si_pid, SIGUSR1);
			ft_putchar_bonus('\n');
		}
		g_all.c = 0;
		g_all.count = 0;
	}
}

static void	serveur_bonus(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr_bonus(pid);
	ft_putchar_bonus('\n');
}

int	main(void)
{
	struct sigaction	action;

	action.sa_sigaction = get_char_bonus;
	action.sa_flags = SA_SIGINFO;
	sigemptyset(&action.sa_mask);
	serveur_bonus();
	while (1)
	{
		sigaction(SIGUSR2, &action, NULL);
		sigaction(SIGUSR1, &action, NULL);
		pause();
	}
}
