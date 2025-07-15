/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:32:22 by buehara           #+#    #+#             */
/*   Updated: 2025/07/11 17:34:16 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);

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
	while (*s1 || *s2)
	{
		if ((*s1 < *s2) || (*s1 > *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
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
	int	ctrl;

	ctrl = 1;
	while (argc > ctrl)
	{
		args[ctrl - 1] = ctrl;
		ctrl++;
	}
	ctrl = 1;
	while (ctrl < argc - 1)
	{
		if (ft_strcmp(argv[ctrl], argv[ctrl + 1]) > 0)
			ft_swap(&args[ctrl - 1], &args[ctrl]);
		ctrl++;
	}
}

int	main(int argc, char **argv)
{
	int	ctrl;
	int	args[100];

	if (argc > 0)
	{
		ft_sort_params(argc, argv, args);
		ctrl = 0;
		while (ctrl < argc - 1)
		{
			ft_putstr(argv[args[ctrl]]);
			ft_putchar('\n');
			ctrl++;
		}
	}
	return (0);
}
