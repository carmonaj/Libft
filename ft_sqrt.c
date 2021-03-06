/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarmona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:31:31 by jcarmona          #+#    #+#             */
/*   Updated: 2016/08/13 22:31:44 by jcarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int n1;
	int n2;

	n1 = 1;
	while ((n2 = n1 * n1) <= nb)
	{
		if (n1 * n1 == nb)
		{
			return (n1);
		}
		n1++;
	}
	return (0);
}
