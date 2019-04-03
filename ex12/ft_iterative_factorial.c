/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 07:54:56 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/02 07:55:08 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
}
