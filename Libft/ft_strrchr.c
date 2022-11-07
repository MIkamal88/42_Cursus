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

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		
	}
}

int	main(void)
{
	char tweet[] = "This @is @my @mention";
	char *mention = strrchr(tweet, '@');

	printf("%s", mention);
}
