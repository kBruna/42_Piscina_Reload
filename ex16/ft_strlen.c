/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 13:11:12 by buehara           #+#    #+#             */
/*   Updated: 2025/07/16 17:15:37 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("Strlen = %d", ft_strlen(argv[1]));
	}
	return (0);
}*/
