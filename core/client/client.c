/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:31:08 by lidbaha           #+#    #+#             */
/*   Updated: 2025/03/03 12:31:56 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static int	check_error(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		return (1);
	i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
			return (1);
	}
	return (0);
}

static void	send_char(unsigned char c, int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (c & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
		usleep(100);
	}
}

static void	send_len(int len, int pid)
{
	int	i;

	i = -1;
	while (++i < 32)
	{
		if (len & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		len = len >> 1;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str_to_send;
	int		len;
	int		i;

	if (check_error(argc, argv))
	{
		write(2, "Error !\n", 8);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		write(2, "Error !\n", 8);
		return (1);
	}
	str_to_send = argv[2];
	len = ft_strlen(str_to_send);
	i = -1;
	send_len(len, pid);
	while (str_to_send[++i])
		send_char(str_to_send[i], pid);
	send_char(str_to_send[i], pid);
	return (0);
}
