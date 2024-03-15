/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:40 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/13 16:52:34 by pcabanas         ###   ########.fr       */
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
			count += ft_printf_flags(format[i + 1], &ptr);
		else
			count += ft_putchar(format[i + 1]);
		i++;
	}

	va_end(ptr);
}

int	main(void)
{
	ft_printf("Hola, agente %d. Bienvenido a %d.\n", 777, 42);
	//printf("Hola, agente %d. Bienvenido a %d.\n", 777, 42);
}
