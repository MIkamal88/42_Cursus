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
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	
}

int	main(void)
{
	//returns array size of dst + src
	//adds src TO dst and adds a null terminator after.
	char	dst[30] = "my test phrase";
	char	src[] = "This is";
	printf("%lu\n", strlcat(dst, src, 0));
	printf("%s\n", dst);
}
