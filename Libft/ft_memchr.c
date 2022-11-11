/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42_ft_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:58:08 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/10 08:58:09 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (c == char_s[i])
			return (char_s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char data[] = {'q', 'w', 'a', 's', 'r', 'p', 'z', 'x'};
// 	char *pos = ft_memchr(data, 'p', 8);
// 	if (pos == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("pos[0] = %c\n", pos[1]);
// }
