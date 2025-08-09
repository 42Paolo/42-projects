/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrogi <pbrogi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 00:49:25 by pbrogi            #+#    #+#             */
/*   Updated: 2025/08/10 01:29:57 by pbrogi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int n)
{
	char c;
	
	c = n + '0';
	write(1, &c, 1);
}

void    ft_print_comb2()
{
	int u_1 = 0;
	int d_1 = 0;
	
	int u_2 = 0;
	int d_2 = 0;
	
	while(d_2 != 10)
	{
		while(u_2!= 10)
		{
			while(d_1 != 10)
			{
				while(u_1 != 10)
				{
					int num1 = d_2 * 10 + u_2;
					int num2 = d_1 * 10 + u_1;
					if(num1 < num2)
					{
						ft_print_num(d_2);
						ft_print_num(u_2);
						write(1, " ", 1);
						ft_print_num(d_1);
						ft_print_num(u_1);
						write(1, ", ", 2);
					}
					u_1++;
				}
				
				u_1 = 0;
				d_1++;
				
			}
			d_1 = 0;
			u_2++;
		}
		u_2 = 0;
		d_2++;
	}
	write(1, "\n", 1);
}
