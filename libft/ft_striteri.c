/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurmenet <lurmenet@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:15:15 by lurmenet          #+#    #+#             */
/*   Updated: 2023/12/10 17:02:27 by lurmenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void print_striteri(unsigned int index, char *character)
// {
// 	printf("Index: %u, Character: %c\n", index, *character);
// }

// int	main(void)
// {
// 	// Example string
// 	char myString[] = "Hello";

// 	 // Applying ft_striteri to print index and character of each element
// 	ft_striteri(myString, &print_striteri);

// 	 return 0;
// }