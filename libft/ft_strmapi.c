/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:06:04 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 17:07:18 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char myMappingFunction(unsigned int index, char c)
{
	if (index % 5 == 0) {
		return toupper(c);
	} else {
		return c;
	}
}

int	main(void)
{
	const char *original = "unodostreslaputamadre";


	char *mappedString = ft_strmapi(original, myMappingFunction);
	 if (mappedString != NULL)
	{
		// Print the original and mapped strings
		printf("Original: '%s'\n", original);

		printf("Mapped:   '%s'\n", mappedString);	
				
		 // Don't forget to free the allocated memory
		
		free(mappedString);
	}
	else
	{
		printf("Memory allocation error or input string is NULL.\n");
	}

	return 0;
}*/