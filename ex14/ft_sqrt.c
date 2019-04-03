/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 08:05:06 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/02 08:23:24 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	if (nb == 1)
		return (1);
	a = nb / 2;
	while (a > 0)
	{
		if (a < 46341 && a * a == nb)
			return (a);
		a--;
	}
	return (0);
}