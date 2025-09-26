/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 22:02:12 by jwira             #+#    #+#             */
/*   Updated: 2025/09/26 22:13:55 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	
}
int	main(void)
{
	char s[] = "this is a string";
	int	start = 10;

	char	*str = ft_substr(s, start, 3);
	printf("%s", str);
	free(str);
	return (0);
}
