/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwira <jwira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 23:08:48 by jwira             #+#    #+#             */
/*   Updated: 2025/09/26 23:14:18 by jwira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write (1, &s[i], fd);
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "abcdefg";
	ft_putstr_fd(s, 1);
	return (0);
}*/
