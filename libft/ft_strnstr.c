/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:04:57 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 18:07:25 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		length;
	char	*large;
	char	*small;

	if (*little == '\0')
		return ((char *)big);
	large = (char *)big;
	small = (char *)little;
	i = 0;
	length = ft_strlen(small);
	while (large[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((large + i), small, length) == 0)
		{
			return (large + i);
		}
		i++;
	}
	return (NULL);
}
