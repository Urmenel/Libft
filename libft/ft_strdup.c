/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:38:14 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 16:59:03 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*DESCRIPTION:
	The strdup() function allocates sufficient memory for a copy of the
	string s1, does the copy, and returns a pointer to it.  The pointer may
	subsequently be used as an argument to the function free(3).
*/
char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *)malloc(ft_strlen (s) + 1);
	if (!new)
		return (0);
	ft_memcpy(new, s, ft_strlen(s) + 1);
	return (new);
}

// int	main(void)
// {
// 	const char	*original = "Hello you";
// 	char	*duplicated;

// 	duplicated = ft_strdup(original);
// 	printf("Original str %s\n", original);
// 	printf("Duplicated %s\n", duplicated);
// 	free(duplicated);
// 	return (0);
// }
