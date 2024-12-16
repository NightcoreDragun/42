/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncd <ncd@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 06:58:18 by ncd               #+#    #+#             */
/*   Updated: 2024/12/16 08:36:01 by ncd              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/include/ft_printf.h"
#include <signal.h>
#include <unistd.h>

void	send_char(int pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (c & (1 << bit))
		{
			if (kill(pid, SIGUSR1) == -1)
			{
				ft_printf("Error: Failed to send signal\n");
				exit(1);
			}
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
			{
				ft_printf("Error: Failed to send signal\n");
				exit(1);
			}
		}
		usleep(200);
		bit--;
	}
}

int	ft_parse_pid(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (str[0] == '-')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	send_message(int pid, char *msg)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(msg);
	if (len > 1400)
	{
		ft_printf("Error: Message too long (max 1400 characters)\n");
		exit(1);
	}
	ft_printf("Sending message to PID %d...\n", pid);
	i = 0;
	while (msg[i])
	{
		send_char(pid, msg[i]);
		i++;
	}
	send_char(pid, '\n');
	ft_printf("Message sent successfully.\n");
}

int	main(int argc, char **argv)
{
	int	server_pid;

	if (argc != 3)
	{
		ft_printf("Usage: ./client <server_pid> <message>\n");
		exit(1);
	}
	server_pid = ft_parse_pid(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Error: Invalid PID\n");
		exit(1);
	}
	send_message(server_pid, argv[2]);
	return (0);
}
