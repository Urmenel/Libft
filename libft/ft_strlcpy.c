/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:58:47 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 13:58:29 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst [i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// 	int	main(void)
// {
// 	char	destination [34];
// 	const char	source [] = "we made it aga ";
// 	size_t	size = 10;
// 	size_t	result = ft_strlcpy(destination, source, size);

// 	printf("source: %s\n", source);
// 	printf("Destination afther copying: %s\n", destination);
// 	printf("number of characters copied: %zu\n", result);
// 	return (0);
// }
