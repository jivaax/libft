/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:29:03 by jwira             #+#    #+#             */
/*   Updated: 2025/10/19 15:44:21 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		l;

	i = 0;
	j = 0;
	l = ft_strlen(src);
	while (i < size && dst[i])
		i++;
	if (size <= i)
		return (size + l);
	while (src[j] && (j + i + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (i + l);
}

//int	main(void)
//{
//	char	dest[4];
//	ft_memset(dest, 'B', 4);
//	char	*src = (char *)"AAAAAAAAA";

//	printf("%d\n%s", ft_strlcat(dest, src, 3), dest);
//	return (0);
//}