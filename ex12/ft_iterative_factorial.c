/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:48:03 by buehara           #+#    #+#             */
/*   Updated: 2025/07/15 20:11:32 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
    else if (nb < 0)
        return (0);
    else
    {
	    result = nb;
	    nb--;
	    while (nb > 0)
	    {
		    result = result * nb;
		    nb--;
	    }
    }
	return (result);
}
