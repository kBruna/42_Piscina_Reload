/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:37:16 by buehara           #+#    #+#             */
/*   Updated: 2025/07/15 19:11:32 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	ctrl;

	count = 0;
	ctrl = 0;
	while (tab[ctrl] != 0)
	{
		if (f(tab[ctrl]) == 1)
		{
			count++;
		}
		ctrl++;
	}
	return (count);
}

/*
#include <string.h>
int	function(char *str)
{
	if (str[0] == 'a' || str[0] == 'A')
		return (1);
	return (0);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str[] = {"abacaxi", "banana", "abacaxi", "cacau", "groselha", "abacaxi"};
	int	result;

	result = ft_count_if(str, function);
	printf("%d", result);

	return (0);
}*/
