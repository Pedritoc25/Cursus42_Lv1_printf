/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:55:40 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/15 18:49:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		*count;
	int		i;

	count = 0;
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			*count += ft_check_flags(format[i + 1], ptr);
			i++;
		}
		else
			*count += ft_putchar(format[i + 1]);
		i++;
	}

	va_end(ptr);
	return (*count);
}

int	main(void)
{
	ft_printf("%d.\n", 777);
	//printf("Hola, agente %d. Bienvenido a %d.\n", 777, 42);
}
