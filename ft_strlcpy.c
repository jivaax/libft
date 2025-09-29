/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:27:54 by jwira             #+#    #+#             */
/*   Updated: 2025/09/29 23:21:19 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[size - 1] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char src[] = "coucou";
	char dest[10];
	ft_memset(dest, 'A', 10);

	printf("%d", ft_strlcpy(dest, src, -1));
	return (0);
}*/
