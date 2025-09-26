/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:29:03 by jwira             #+#    #+#             */
/*   Updated: 2025/09/26 16:14:04 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (j <= size - i - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	j = 0;
	while (dst[j])
		j++;
	return (j);
}

/*int	main(void)
{
	char d[15] = "julianka";
	char s[] = " roza wira";

	printf("%d", ft_strlcat(d, s, 15));
	return (0);
}*/
