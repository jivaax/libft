/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:24:42 by jwira             #+#    #+#             */
/*   Updated: 2025/09/29 21:57:35 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (s > d)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}

/*int	main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	
	ft_memmove(s0, s, 7);
	printf("%c", s0[6]);

	return (0);
}*/
