/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshehata <mshehata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:30:55 by mshehata          #+#    #+#             */
/*   Updated: 2022/11/15 16:14:10 by mshehata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> // to be removed!

int		ft_atoi(const char *str);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
size_t	ft_strlen(const char *str);
int		ft_tolower(int i);
int		ft_toupper(int i);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
void	ft_bzero(void *s, size_t n);

#endif
