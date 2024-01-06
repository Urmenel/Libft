/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:27:27 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 16:56:15 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (0);
	while (*s1)
	{
		if (ft_check(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check(s1[size -1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size +1 * sizeof(char));
	if (!new)
		return (0);
	ft_strlcpy(new, (char *)s1, size +1);
	return (new);
}
// int	main(void)
// {// Example usage of ft_strtrim
// 	const char *original = "   Hello, World!   ";
// 	const char *set = " \t\n";  // Define characters to trim
// 	// Call ft_strtrim to get the trimmed string
// 	char *trimmed = ft_strtrim(original, set);
// 	if (trimmed != NULL)
// 	{
// 		// Print the original and trimmed strings
// 		printf("Original: '%s'\n", original);
// 		printf("Trimmed:  '%s'\n", trimmed);
// 		// Don't forget to free the allocated memory
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("Memory allocation error or input strings are NULL.\n");
// 	}
// 	return 0;
// }