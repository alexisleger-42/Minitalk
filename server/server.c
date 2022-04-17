/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:52:52 by aleger            #+#    #+#             */
/*   Updated: 2022/04/17 16:05:56 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// This function is the handler for messenging signals (SIGUSR1 = 0 and SIGUSR2 = 1). It prints a char and reset the byte when it received 8 bits.

static void	handler_message(int signum)
{
	
}

static void	handler_exit(int signum)
{
	(void)signum;
	exit(0);
}

int	main(void)
{
	display_pid();
	signal(SIGUSR1, handler_message);
	signal(SIGUSR2, handler_message);
	signal(SIGUSR1, handler_exit);
	signal(SIGUSR2, handler_exit);
	while (true)
		pause();
}