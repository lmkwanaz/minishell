/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkwanaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 15:22:12 by lmkwanaz           #+#    #+#             */
/*   Updated: 2018/06/09 15:32:40 by lmkwanaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	if (!fresh)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
