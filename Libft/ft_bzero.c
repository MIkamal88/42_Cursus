/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:51:20 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/07 20:51:21 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	//same as memset except \0 instead of inserted integer
	char	*char_s;
	size_t i;

	char_s = (char *)s;
	i = 0;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char s[] = "This is my test phrase";
// 	ft_bzero(s, 10) ;

// 	printf(("%s"), s);
// }
