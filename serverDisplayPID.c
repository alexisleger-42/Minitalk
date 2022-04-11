/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serverDisplayPID.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:37:12 by aleger            #+#    #+#             */
/*   Updated: 2022/04/11 16:54:40 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void	display_pid(void)
{
	pid_t	pid;
	char	*str_pid;

	pid = getpid();
	str_pid = ft_itoa(pid);
	if (!str_pid)
	{
		ft_putendl_fd("Error at ft_itoa()", 2);
		return ;
	}
	ft_putendl_fd(str_pid, 1);
	free(str_pid);
}
