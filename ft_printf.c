/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:40 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/21 10:22:10 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_check_flags(format[i + 1], ptr);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}

/*int	main(void)
{
	char			c;
	char			*s;
	void			*p;
	int				d;
	int				i;
	unsigned int	u;
	int				x;
	int				X;
	int	count;
	int	count_OG;

	c = 'w';
	s = "string";
	p = "pointer";
	d = -1;
	i = -2;
	u = 200;
	x = 16;
	X = 16;
	//count = ft_printf("Test: \nc -> %c\ns -> %s\np-> %p\nd-> %d\ni
	//-> %i\nu -> %u\nx -> %x\nX -> %X\n%%\n\n", c, s, p, d, i, u, x, X);
	//count_OG = printf("Test: \nc -> %c\ns -> %s\np -> %p\nd -> %d\ni
	//-> %i\nu -> %u\nx -> %x\nX -> %X\n%%\n\n", c, s, p, d, i, u, x, X);
	count = ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX,
	LONG_MIN, ULONG_MAX, 0, -42);
	count_OG = printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX,
	LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("1 %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("2 %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf("FT_printf count = %d\n", count);
	printf("Printf count = %d\n", count_OG);
	//printf("Greetings agent %d. Welcome to %d.\n", 777, 42);
}*/