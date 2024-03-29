/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkwanaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:10:38 by lmkwanaz           #+#    #+#             */
/*   Updated: 2018/06/01 18:24:34 by lmkwanaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;

	i = ft_strlen(s1);
	a = 0;
	while (s2[a] != '\0' && a < n)
	{
		s1[i + a] = s2[a];
		a++;
	}
	s1[i + a] = '\0';
	return (s1);
}
