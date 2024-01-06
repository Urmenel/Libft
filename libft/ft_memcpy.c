/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:42:41 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 17:02:39 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "0123456789 ";
// 	char	str2[]= "abcdefghijklmnop";

// 	ft_memcpy(str1, str2 + 0, 8 * sizeof(char));
// 	printf("%s\n", str1);
// 	return (0);
// }