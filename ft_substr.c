/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:33:03 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/21 14:19:16 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "This is a test phrase";
// 	char	start = 'T';

// 	char	*res = ft_substr(s, start, 4);

// 	if (res == NULL)
// 		printf("NULL");
// 	else
// 		printf("%s\n", res);
// }
// Parameters
// #1. The string from which to create the substring.
// #2. The start index of the substring in the string ’s’.
// #3. The maximum length of the substring.
// Return value The substring. NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
