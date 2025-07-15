/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:53:23 by buehara           #+#    #+#             */
/*   Updated: 2025/07/11 14:52:35 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	ctrl;

	ctrl = 0;
	while (str[ctrl])
	{
		ft_putchar(str[ctrl++]);
	}
}

/*int	main(void)
{
	char	str[] = "Funciona";

	ft_putstr(str);

	return (0);
}*/
