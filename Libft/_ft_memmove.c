/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:02:16 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/10 09:02:34 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*char_dst;
	char	*char_src;
	char	*swap;
	size_t	i;

	char_dst = (char *) dst;
	char_src = (char *) src;
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (i < n)
	{
		swap[i] = char_src[i];
		char_dst[i] = swap[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	src[] = "test phrase 123";
	char	dest[] = "Destination test phrase 321";
	char	*dest_ptr = ft_memmove(dest, src, 16);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	if (dest_ptr == NULL)
		printf("NULL");
	else
		printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);
}
