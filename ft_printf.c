/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:40 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/19 16:28:26 by pcabanas         ###   ########.fr       */
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
		if (format[i] == '%')
		{
			count += ft_check_flags(format[i + 1], ptr);
			i++;
			printf("debug 30.ft_printf\n"); //BORRAR
		}
		else
			count += ft_putchar(format[i]);
		printf("Current format = %d\n", format[i]); //BORRAR
		printf("Current count = %d\n", count); //BORRAR
		i++;
	}
	va_end(ptr);
	return (count);
}

/*int	main(void)
{
	int	count;
	count = ft_printf("%d3\n", 777);
	printf("Printf count = %d\n", count);
	//printf("Hola, agente %d. Bienvenido a %d.\n", 777, 42);
}*/