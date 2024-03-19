/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   characters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:34:50 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/19 16:25:59 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Prints a character and returns '1' int
int	ft_putchar(char c)
{
	write(1, &c, 1);
	printf("\n");
	return (1);
}

//Prints a string and returns counter
int	ft_putstr(char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s)
	{
		count += ft_putchar(s[i]);
	}
	return (count);
}

//Prints a pointer and returns counter
int	ft_pointer(size_t *arg)
{
	int	count;

	write (1, "0x", 2);
	count = 2;
	count += ft_puthex(*arg, "0123456789abcdef");
	return (count);
}
