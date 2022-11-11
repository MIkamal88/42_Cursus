/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:03:00 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/10 15:28:17 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	k;
	int	i;
	int		tmp;

	k = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (k < len && *haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;
			tmp = 0;
			while (needle[i] != '\0')
			{
				if (haystack[i] != needle[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return ((char *)haystack);
		}
		haystack++;
		k++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *haystack = "This is my test phrase";
// 	char needle[] = "p";
// 	char *res = ft_strnstr(haystack, needle, 22);
// 	if (res == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", res);
// }
