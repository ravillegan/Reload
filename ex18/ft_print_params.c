/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:20:14 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/03 18:37:00 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int		main(int gc, char **gv)
{
	int i;

	i = 1;
	while (gv[i])
		ft_putstr(gv[i++]);
	return (0);
}
