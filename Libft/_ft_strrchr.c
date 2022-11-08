/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:11:18 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/07 11:17:14 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char tweet[] = "This @is @my @mention";
	char *mention = ft_strrchr(tweet, '@');

	printf("%s\n", mention);
	printf("%s\n", strlen(tweet));
}
