/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:39:02 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/15 18:48:23 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flags(const char flag, va_list ptr)
{
	if (flag == '%')
		count += ft_putchar('%'),

	printf ("%d", va_arg(ptr, int)); //BORRAR
	return (2);
}

/*int	main()
{

}*/