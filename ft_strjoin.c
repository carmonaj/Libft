/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarmona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 22:43:50 by jcarmona          #+#    #+#             */
/*   Updated: 2016/10/07 15:19:15 by jcarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	char *fresh;

	fresh = NULL;
	if (s1 && s2)
	{
		fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (fresh == NULL)
			return (NULL);
		fresh = strcpy(fresh, s1);
		fresh = ft_strcat(fresh, s2);
		return (fresh);
	}
	return (NULL);
}
