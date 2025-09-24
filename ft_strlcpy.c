/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:27:54 by jwira             #+#    #+#             */
/*   Updated: 2025/09/24 13:40:25 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[size] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char d[10] = "koteczki";
	char s[] = "dupa";

	printf("%d", ft_strlcpy(d, s, 5));
	return (0);
}*/
