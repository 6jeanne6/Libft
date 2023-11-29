/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewu <jewu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:57:45 by jewu              #+#    #+#             */
/*   Updated: 2023/11/24 11:58:22 by jewu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end - 1]) && (s1[end - 1] != '\0')
		&& (start < end))
		end--;
	ptr = (char *)malloc(sizeof(char) * end - start + 1);
	if (!ptr)
		return (0);
	else
		ft_strlcpy(ptr, &s1[start], end - start + 1);
	return (ptr);
}
