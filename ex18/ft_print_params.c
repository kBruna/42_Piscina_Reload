/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:47 by buehara           #+#    #+#             */
/*   Updated: 2025/07/11 14:49:43 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	ctrl;

	if (argc > 0)
	{
		ctrl = 1;
		while (argv[ctrl])
		{
			while (*argv[ctrl])
			{
				ft_putchar(*argv[ctrl]);
				argv[ctrl]++;
			}
			ft_putchar('\n');
			argv++;
		}
	}
}
