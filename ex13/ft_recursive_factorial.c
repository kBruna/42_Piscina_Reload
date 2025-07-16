/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:03:59 by buehara           #+#    #+#             */
/*   Updated: 2025/07/16 17:31:58 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
