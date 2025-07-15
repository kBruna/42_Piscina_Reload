/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:23:00 by buehara           #+#    #+#             */
/*   Updated: 2025/07/11 12:51:56 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	ctrl;
	int	answer;

	ctrl = 1;
	answer = 0;
	while (answer < nb)
	{
		answer = ctrl * ctrl;
		if (answer == nb)
			return (ctrl);
		ctrl++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	n;

	if (argc > 0)
	{
		n = atoi(argv[1]);
		printf("A raiz de %d é %d", n, ft_sqrt(n));
	}
	return (0);
}*/
