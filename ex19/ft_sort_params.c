/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:32:22 by buehara           #+#    #+#             */
/*   Updated: 2025/07/16 18:56:16 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);

#include <unistd.h>
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
		ft_putchar(str[ctrl]);
		ctrl++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_params(int argc, char **argv, int *args)
{
	int	ctrl_out;
	int	ctrl_in;

	ctrl_out = 0;
	while (ctrl_out < argc)
	{
		ctrl_in = ctrl_out + 1;
		while (argc - 1 > ctrl_in)
		{
			if (ft_strcmp(argv[ctrl_out], argv[ctrl_in]) > 0)
			{
				ft_swap(&args[ctrl_out], &args[ctrl_in]);
			}
			ctrl_in++;
		}
		ctrl_out++;
	}
}

int	main(int argc, char **argv)
{
	int	ctrl;
	int	args[100];

	if (argc > 1)
	{
		ctrl = 1;
		while (argc > ctrl)
		{
			args[ctrl] = ctrl;
			ctrl++;
		}
		ft_sort_params(argc, argv, args);
		ctrl = 1;
		while (ctrl < argc)
		{
			ft_putstr(argv[args[ctrl]]);
			ft_putchar('\n');
			ctrl++;
		}
	}
	return (0);
}
