/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:46:06 by lurmenet          #+#    #+#             */
/*   Updated: 2023/11/16 19:54:14 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
	// char	o;
// 
	// o = '5';
	// printf("%d\n", isalpha(0));
	// printf("%d\n", ft_isalpha(o));
	// return (0);
// }
// 