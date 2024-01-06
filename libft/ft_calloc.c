/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:34:03 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 17:00:20 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tsize;
	void	*dst;

	if (!nmemb || !size)
		return (malloc(0));
	tsize = size * nmemb;
	if (tsize / size != nmemb)
		return (0);
	dst = malloc(size * nmemb);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tsize);
	return (dst);
}

/*int	main(void)
{
	int		i;
	char	*new;
	new = ft_calloc(10, 2);
	i = 0;
	while (i <= 10)
	{
		printf("%d\n", new[i]);
		i++;
	}
	free(new);
	return (0);
}
*/