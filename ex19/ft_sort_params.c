/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:32:22 by buehara           #+#    #+#             */
/*   Updated: 2025/07/15 20:16:41 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	ctrl_out;
    int ctrl_in;
    int swap;

	ctrl_out = 0;
	while (ctrl_out < argc - 2)
    {
        swap = 0;
        ctrl_in = 1;
        while (ctrl_in < (argc - ctrl_out - 1))
        {
		    if (ft_strcmp(argv[ctrl_in], argv[ctrl_in + 1]) > 0)
            {
			    ft_swap(&args[ctrl_in - 1], &args[ctrl_in]);
                swap = 1;
            }
		    ctrl_in++;
        }
        ctrl_out++;
        if (swap == 0)
            break;
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
            args[ctrl - 1] = ctrl;
            ctrl++;
        }
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
