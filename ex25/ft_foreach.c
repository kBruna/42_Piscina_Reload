/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:56:23 by buehara           #+#    #+#             */
/*   Updated: 2025/07/15 11:34:54 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	ctrl;

	ctrl = 0;
	while (ctrl < length)
	{
		f(tab[ctrl]);
		ctrl++;
	}
}

/*
#include <unistd.h>
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			ft_putchar('-');
		}
		if (nbr >= 10)
		{
			ft_putnbr((nbr / 10));
		}
		nbr = nbr % 10;
		ft_putchar((nbr + '0'));
	}
}

int	main(void)
{
	int	tab[] = {1,43,754,234,7673,454,7574,457,8,768,24};

	ft_foreach(tab, 11, &ft_putnbr);

	return (0);
}*/
