/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:35:08 by buehara           #+#    #+#             */
/*   Updated: 2025/07/16 19:02:10 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFER_DATA 1000

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	ctrl;

	ctrl = 0;
	while (str[ctrl] != '\0')
	{
		ft_putchar(str[ctrl]);
		ctrl++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	char	str[BUFFER_DATA];
	int		bytes_read;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		bytes_read = read(fd, str, BUFFER_DATA);
		if (bytes_read > 0)
		{
			str[bytes_read] = '\0';
			ft_putstr(str);
		}
	}
	else if (argc == 1)
		ft_putstr("File name missing.");
	else
		ft_putstr("Too many arguments");
	return (0);
}
