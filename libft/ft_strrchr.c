/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:51:36 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 18:08:30 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = s + ft_strlen(s);
	while (res >= s && *res != (char)c)
		res--;
	if (res >= s)
		return ((char *)res);
	else
		return (NULL);
}
