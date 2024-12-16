/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncd <ncd@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 06:58:18 by ncd               #+#    #+#             */
/*   Updated: 2024/12/16 08:40:24 by ncd              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/include/ft_printf.h"
#include <signal.h>
#include <unistd.h>

void	handle_signal(int signum)
{
	static char	g_char = 0;
	static int	g_bits = 0;

	if (signum == SIGUSR1)
		g_char = (g_char << 1) | 1;
	else if (signum == SIGUSR2)
		g_char = g_char << 1;
	g_bits++;
	if (g_bits == 8)
	{
		write(1, &g_char, 1);
		g_char = 0;
		g_bits = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sa.sa_handler = handle_signal;
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
