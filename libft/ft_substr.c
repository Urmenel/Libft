/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:52:12 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 13:52:01 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (0);
	i = ft_strlen(s);
	len_s = 0;
	if (start < i)
		len_s = i - start;
	if (len_s > len)
		len_s = len;
	new_str = (char *)malloc(sizeof(char) * (len_s +1));
	if (!new_str)
		return (0);
	ft_strlcpy(new_str, s + start, len_s +1);
	return (new_str);
}
// int	main(void)
// {
// 	char const	*originalstr = "Hello world";
// 	unsigned	int	start = 3;
// 	size_t	len = 5;
// 	char	*result = ft_substr(originalstr, start, len);

// 	printf("%s\n", result);
// 	printf("original %s\n", originalstr);
// 	free(result);
// 	return (0);
// }