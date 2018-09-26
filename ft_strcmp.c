/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 17:45:40 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/25 17:51:41 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	while (*a != '\0' && *b != '\0')
	{
		if (*a != *b)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
	}
	if (*a != *b)
		return ((unsigned char)*a - (unsigned char)*b);
	return (0);
}
