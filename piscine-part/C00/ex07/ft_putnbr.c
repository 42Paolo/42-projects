/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrogi <pbrogi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 03:50:47 by pbrogi            #+#    #+#             */
/*   Updated: 2025/07/30 20:52:32 by pbrogi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char	char_num;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	char_num = num % 10 + '0';
	write(1, &char_num, 1);
}
