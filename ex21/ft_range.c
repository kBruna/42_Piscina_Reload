/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:33:09 by buehara           #+#    #+#             */
/*   Updated: 2025/07/12 18:10:49 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*array;
	int	ctrl;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (array == NULL)
		exit (EXIT_FAILURE);
	ctrl = 0;
	while (ctrl < (max - min))
	{
		array[ctrl] = min + ctrl;
		ctrl++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	int min, max, ctrl;
	int	*array;

	min = 444445;
	max = 15;
	ctrl = 0;

	array = ft_range(min, max);

	while (ctrl < (max - min))
	{
		printf("%d", array[ctrl]);
		ctrl++;
	}

	free (array);

	return (0);
}*/
