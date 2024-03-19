/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:39:02 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/19 16:35:17 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//check for cspdiuxX% print flags
int	ft_check_flags(const char flag, va_list ptr)
{
	size_t	count;

	count = 1;
	if (flag == 'c')
		count += ft_putchar(va_arg(ptr, int));
	if (flag == 's')
		count += ft_putstr(va_arg(ptr, char *));
	if (flag == 'p')
		count += ft_pointer(va_arg(ptr, size_t *));
	if (flag == 'i' || flag == 'd')
		count += ft_putnbr(va_arg(ptr, int));
	if (flag == 'u')
		count += ft_unsg_putnbr(va_arg(ptr, unsigned int));
	if (flag == 'x')
		count += ft_puthex(va_arg(ptr, unsigned int), "0123456789abcdef");
	if (flag == 'X')
		count += ft_puthex(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	if (flag == '%')
		count += ft_putchar('%');
	return (count);
}
