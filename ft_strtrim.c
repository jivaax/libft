/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:37:43 by jwira             #+#    #+#             */
/*   Updated: 2025/10/01 15:41:22 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

/*static int	trimmed(char const *set, char c)
{


}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while (trimmed(set, s1[i]))
		i++;
	while (trimmed(set, s1[j]))
		j--;
	trim = malloc(ft_strlen(s1) - j - i + 1);
	ft_strlcpy(trim, s1, ft_strlen(s1) - j - i + 1);
	if (!trim)
		return (NULL);
	return (trim);
}

int	main(void)
{
	char	s1[] = "lllkkjolhello worldkkkoolljjj";
	char	set[5] = {"lokj"};
	char	*trim;

	trim = ft_strtrim(s1, set);
	printf("%s", trim);
	free(trim);
	return (0);
}*/
