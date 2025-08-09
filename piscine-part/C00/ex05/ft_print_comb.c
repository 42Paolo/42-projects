/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrogi <pbrogi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:38:32 by pbrogi            #+#    #+#             */
/*   Updated: 2025/08/10 01:30:43 by pbrogi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_print_number(int c, int d, int u)
{
	if (c < d && d < u)
	{
		ft_print_num (c);
		ft_print_num (d);
		ft_print_num (u);
		write(1, "\n", 1);
	}
}

void	ft_print_comb(void)
{
	int		u;
	int		d;
	int		c;

	u = 0;
	d = 0;
	c = 0;
	while (c != 10)
	{
		while (d != 10)
		{
			while (u != 10)
			{
				ft_print_number(c, d, u);
				u++;
			}
			u = 0;
			d++;
		}
		d = 0;
		c++;
	}
}
