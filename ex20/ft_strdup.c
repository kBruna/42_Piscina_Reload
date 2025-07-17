/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:02:45 by buehara           #+#    #+#             */
/*   Updated: 2025/07/17 11:55:41 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

int		ft_strlen(char *src);

int	ft_strlen(char *src)
{
	int	ctrl;
	int	count;

	ctrl = 0;
	count = 0;
	while (src[ctrl] != '\0')
	{
		count++;
		ctrl++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		ctrl;
	char	*ptr;

	ctrl = 0;
	len = ft_strlen(src);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ctrl = 0;
	while (src[ctrl] != '\0')
	{
		ptr[ctrl] = src[ctrl];
		ctrl++;
	}
	ptr[ctrl] = '\0';
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	origin[] = "String Original!";
	char	*ptr;

	ptr = ft_strdup(origin);
	printf("PTR: %s\n", ptr);
	printf("Original: %s\n", strdup(origin));
	free(ptr);
	return (0);
}*/
