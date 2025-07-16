/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:02:45 by buehara           #+#    #+#             */
/*   Updated: 2025/07/15 20:22:43 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		ctrl;
	char	*ptr;

	len = ft_strlen(src);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == '\0')
		exit();
	ctrl = 0;
	while (src[ctrl] != '\0')
	{
		ptr[ctrl] = src[ctrl];
		ctrl++;
	}
	ptr[ctrl] = '\0';
	return (ptr);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char	origin[] = "String Original!";

	printf("%s\n", ft_strdup(origin));
	printf("%s\n", strdup(origin));
	return (0);
}*/
