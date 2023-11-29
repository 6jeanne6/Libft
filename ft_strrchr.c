/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewu <jewu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:38:18 by jewu              #+#    #+#             */
/*   Updated: 2023/11/20 14:12:03 by jewu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			pos = i;
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	else if (pos >= 0)
		return ((char *)&s[pos]);
	return (NULL);
}
