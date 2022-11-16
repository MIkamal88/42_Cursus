/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:02:57 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/10 14:45:16 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	//returns array size of dst + src
// 	//adds src TO dst and adds a null terminator after.
// 	char	dst[30] = "This is ";
// 	char	src[] = "my test phrase.";
// 	printf("%lu\n", ft_strlcat(dst, src, 15));
// 	printf("%s\n", dst);
// }
