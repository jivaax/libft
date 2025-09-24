/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:46:20 by jwira             #+#    #+#             */
/*   Updated: 2025/09/24 22:25:48 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (l[0] == '\0')
		return ((char *)b);
	while (j <= len && b[j])
	{
		if (b[j] == l[i])
			i++;
		else
		{
			j -= i;
			i = 0;
		}
		if (l[i] == '\0')
			return ((char *)&(b[j - i + 1]));
		j++;
	}
	return (NULL);
}

/*int	main(void)
{
	char l[] = "cki";
	char b[] = "plccki sa fajne";
	
	printf("%s", ft_strnstr(b, l, 9));
	return (0);
}*/
