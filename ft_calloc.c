/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:37:28 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/25 09:33:29 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdint.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size && SIZE_MAX / size < nmemb)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}

// int	main(void)
// {
// 	int	*array;
// 	array = ft_calloc(1000, sizeof(int));
// 	for (int i = 0; i < 1000; i++)
// 		printf("%d\n", array[i]);
// }
