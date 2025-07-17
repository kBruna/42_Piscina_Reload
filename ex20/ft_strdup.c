/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:02:45 by buehara           #+#    #+#             */
/*   Updated: 2025/07/17 11:13:52 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		len;
	int		ctrl;
	char	*ptr;

	ctrl = 0;
	while (src[ctrl] != '\0')
	{
		len++;
		ctrl++;
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
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
	printf("%s\n", ptr);
	printf("%s\n", strdup(origin));
	free(ptr);
	return (0);
}*/
