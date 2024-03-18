/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:39:02 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/18 20:48:41 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//check for cspdiuxX% print flags
int	ft_check_flags(const char flag, va_list ptr, int count)
{
	count += 1;
	if (flag == 'c')
		count += ft_putchar(va_arg(ptr, char));
	if (flag == 's')
		count += ft_putstr(va_arg(ptr, char *));
	if (flag == 'p')
		//count += ft_pointer(va_arg(ptr, char **));
	if (flag == 'i' || flag == 'd')
		count += putnbr(va_arg(ptr, int));
	if (flag == 'u')
		count += unsg_putnbr(va_arg(ptr, unsigned int));
	if (flag == 'x')
		count += ft_puthex(va_arg(ptr, int), "0123456789abcdef");
	if (flag == 'X')
		count += ft_puthex(va_arg(ptr, int), "0123456789ABCDEF");
	if (flag == '%')
		count += ft_putchar('%');

		printf ("%d\n", va_arg(ptr, int)); //BORRAR
	return (count);
}

/*int	main()
{

}*/