/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faysal <faysal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:19:07 by faysal            #+#    #+#             */
/*   Updated: 2021/08/29 20:29:19 by faysal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_args(char **args, int ac)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (args[i] != NULL)
			free(args[i++]);
		free(args);
	}
}
