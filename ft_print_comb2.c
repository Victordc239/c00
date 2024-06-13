/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:52:37 by sofernan          #+#    #+#             */
/*   Updated: 2024/02/28 21:39:25 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num1, int num2, char *buffer)
{
	buffer[0] = (num1 / 10) + '0';
	buffer[1] = (num1 % 10) + '0';
	buffer[2] = ' ';
	buffer[3] = (num2 / 10) + '0';
	buffer[4] = (num2 % 10) + '0';
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	buffer[7];

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		print_num(num1, num2, buffer);
		if (num1 == 98 && num2 == 99)
			write(1, buffer, 5);
		else
		{
			buffer[5] = ',';
			buffer[6] = ' ';
			write(1, buffer, 7);
		}
		num2++;
		if (num2 > 99)
		{
			num1++;
			num2 = num1 + 1;
		}
	}
}
/*
int main()
{
    ft_print_comb2();
    return (0);
}
*/
