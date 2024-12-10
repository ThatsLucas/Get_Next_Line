/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:16:32 by lle-duc           #+#    #+#             */
/*   Updated: 2024/12/10 13:25:56 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc((1 + len) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	i;

	if (!src)
		return (NULL);
	dup = (char *)malloc((ft_strlen(src) + 1) * (sizeof(char)));
	if (!dup)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	y;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc((len + 1) * (sizeof(char)));
	if (!s3)
		return (0);
	y = 0;
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		s3[i++] = s2[y];
		y++;
	}
	s3[i] = '\0';
	return (s3);
}
