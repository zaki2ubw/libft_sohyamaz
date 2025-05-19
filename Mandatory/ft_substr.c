/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyamaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:52:13 by sohyamaz          #+#    #+#             */
/*   Updated: 2024/11/16 17:27:11 by sohyamaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	size_t			slen;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	slen = ft_strlen(s);
	if (start > slen || len < 0)
	{
		return (ft_strdup(""));
	}
	else if (len > slen - start)
	{
		len = slen - start;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
