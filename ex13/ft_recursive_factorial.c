/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:16:21 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/02 08:03:23 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
