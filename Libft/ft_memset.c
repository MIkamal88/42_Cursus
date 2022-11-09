/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:30:28 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/07 16:24:39 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	//sets a whole block of memory to value 'c'
	char	*char_s;
	size_t i;

	char_s = (char *)s;
	i = 0;
	while (i < n)
	{
		char_s[i] = c;
		i++;
	}
	return (char_s);
}

// int	main(void)
// {
// 	char s[] = "This is my test phrase";
// 	char c = 'p';
// 	char *test = ft_memset(s, c, 23) ;

// 	printf(("%s\n"), test);
// }
