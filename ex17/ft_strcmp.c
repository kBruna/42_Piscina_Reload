/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:06:01 by buehara           #+#    #+#             */
/*   Updated: 2025/07/11 14:50:17 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if ((*s1 < *s2) || (*s1 > *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("Resultado ft_strcmp = %d\n", ft_strcmp(argv[1], argv[2]));
		printf("Resultado strcmp = %d", strcmp(argv[1], argv[2]));
	}
	return (0);
}*/
