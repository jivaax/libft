/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:13:26 by jwira             #+#    #+#             */
/*   Updated: 2025/10/12 16:21:34 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc(ft_strlen(s) + 1);
	i = 0;
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

//char	f(unsigned int i, char c)
//{
//	return (i + c);
//}


////int	main(void)
////{
////	char			*str;
////	char	s[] = "0000000000";

////	str = ft_strmapi(s, f);
////	printf("%s", str);
////	free(str);
////	return (0);
////}
