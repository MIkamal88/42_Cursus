/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:31:47 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/13 14:31:47 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	i = 0;
	j = 0;
	k = 0;
	if (str == NULL)
		return (NULL);
	while (*s1)
	{
		if (*s1 == *set)
		{
			s1++;
			set++;
		}
		str[i] = *s1;
		i++;
	}
	return (str);
}

int main(void)
{
	printf("%s", ft_strtrim("This is my test phrase", "my test phrase"));
}
