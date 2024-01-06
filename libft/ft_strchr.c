/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:46:52 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 18:09:23 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*res;

	res = s;
	while (*res)
	{
		if (*res == (char)c)
			return ((char *)res);
		res++;
	}
	if (c == '\0')
		return ((char *)res);
	return (NULL);
}
