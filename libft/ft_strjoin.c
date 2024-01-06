/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:36:37 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 13:55:57 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2)+1);
	if (!new)
		return (0);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
// int	main(void)
// {
// 	const char *s1 = "Hola";
// 	const char *s2 = "Ahoj";
// 	char *result;

// 	result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }