/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:44:42 by jwira             #+#    #+#             */
/*   Updated: 2025/09/29 15:25:02 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;
	int		j;

	i = 0;
	j = 0;
	concat = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!concat)
		return (NULL);
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j] = '\0';
	return (concat);
}

/*int	main(void)
{
	char s1[] = "un";
	char s2[] = "happy";
	char *concat = ft_strjoin(s1, s2);

	printf("%s", concat);
	printf("\n%ld", ft_strlen(concat));
	return (0);
}*/
